#include<bits/stdc++.h>

#define pi 2*acos(0.0)
#define PS system("pause")
#define siter(n,T1)  for(set<T1>::iterator it=n.begin();it!=n.end();it++)
#define miter(n,T1,T2)  for(map<T1,T2>::iterator it=n.begin();it!=n.end();it++)
#define FOR(s,e,inc) for(int i=s;i<=e;i+=inc)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define Sfor(n) for(int i=1;i<=n;i++)
#define inf (1<<30)
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define sz(x) ((int)x.size())
#define eps 1e-9
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define on(x,w)  x=x|(1<<w)
#define check(x,w) (x&(1<<w))==(1<<w)?true:false
#define all(x) (x).begin(),(x).end()
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pf printf
#define ll long long int
#define MOD 1000000007
#define sqr(x) (( (x)* (x))%MOD)
#define cube(x)   ( (sqr(x)*(x))%MOD)
#define bit_cnt(x)   __builtin_popcount(x)
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define btz(a)   __builtin_ctz(a)
#define Mems(p,n) memset(p, n, sizeof(p))
#define makeint(n,s)  istringstream(s)>>n
#define BOUNDARY(i,j,Row,Col) ((i >= 0 && i < Row) && (j >= 0 && j < Col))
#define M 1000002
using namespace std;


typedef vector<int> vi;

template<class T>
inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}

// ~~~~~~~~~~~~~~~ CODE STARTING POINT ~~~~~~~~~~~~~~~~


map<string, int> word;
string ss [202];
vi node[202];
bool visit[202];
int dist[202];
bool cmp(string a,string b)
{
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
        if(a[i]!=b[i])
        cnt++;
    if(cnt==1)
        return true;
    return false;
}

int bfs(int s,int d)
{
    queue<int> q;
    Mems(visit,false);

    visit[s]=true;
    dist[s]=0;
    q.push(s);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<node[u].size();i++)
        {
            int v=node[u][i];
            if(!visit[v])
            {
                visit[v]=true;
                dist[v]=dist[u]+1;
                q.push(v);
            }
            if(v==d)
                return dist[v];
        }
    }
}

int main()
{
    int test,s=0;
    fs(test);
    Sfor(test)
    {
        word.clear();
        string str;
        int j=0;
        while(cin>>str&&str!="*")
        {
            word[str]=++j;
            ss[j]=str;
        }

        for(int k=1; k<j; k++)
            for(int l=k+1; l<=j; l++)
               if(ss[k].length()==ss[l].length())
                if(cmp(ss[k],ss[l]))
               {
                   node[word[ss[k]]].pb(word[ss[l]]);
                   node[word[ss[l]]].pb(word[ss[k]]);
               }
        getchar();
        while(getline(cin,str))
        {
            if(str.empty())
                break;
            string a,b;
            stringstream ss(str);
            ss>>a,ss>>b;
            cout<<a<<' '<<b<<' '<<bfs(word[a],word[b])<<endl;
        }
        for(int k=1;k<=j;k++)
            node[k].clear();
        s++;
        if(s!=test)
            pf("\n");
    }
    return 0;
}
