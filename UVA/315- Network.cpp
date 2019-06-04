

#include<bits/stdc++.h>

#define pi 2*acos(0.0)
#define PS system("pause")
#define FOR(s,e,inc) for(int i=s;i<=e;i+=inc)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define Sfor(n) for(int i=1;i<=n;i++)
#define inf (1<<30)
#define pb push_back
#define ppb pop_back
#define mp make_pair
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
#define M  103
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

//~~~~~~~~~~~~~~~~~CODE STARTING POINT~~~~~~~~~~~~~~~~~~~~~~
vi node[M];
bool visit[M],cut[M];
int dft[M],low[M],cnt;


void dfs(int u,int par=-1)
{
    visit[u]=true;
    int child=0;
    low[u]=dft[u]= ++cnt;
    for(int i=0;i<node[u].size();i++)
    {
        int v=node[u][i];
        if(par==v)
            continue;
        if(visit[v])
            low[u]=min(low[u],dft[v]);
        else
        {
            child++;
            dfs(v,u);
            low[u]=min(low[u],low[v]);
            if(low[v]>=dft[u])
                cut[u]=true;
        }
    }
    if(par==-1)cut[u]=(child>1);
}

int main()
{
int n;
while(s(n)==1&&n!=0)
{
    int ans=0;
    string str;
    Sfor(n)
        node[i].clear();

    while(getline(cin,str)&&str!="0")
    {
        istringstream ss(str);
        int a,b;
        ss>>a;
        while(ss>>b)
        {
            node[a].pb(b);
            node[b].pb(a);
        }
    }
    cnt=0;
    Mems(visit,false);
    Mems(cut,false);
    dfs(1);
    Sfor(n)
    if(cut[i])
        ans++;
    cout<<ans<<endl;
}


return 0;
}




