

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
#define BOUNDARY(i,j,Row,Col) ((i > 0 && i <= Row) && (j > 0 && j <=Col))
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

int r,c,x,y;

int ara[12][12],cnt,step;
char maze[12][12];

void ghuro(char ch)
{
    if(!BOUNDARY(x,y,r,c))
    {
        pf("%d step(s) to exit\n",cnt);
        return;
    }
    if(ara[x][y]!=-1)
    {
        pf("%d step(s) before a loop of %d step(s)\n",ara[x][y],cnt-ara[x][y]);
        return;
    }
    ara[x][y]=cnt;
    cnt++;
    switch(ch)
    {
    case 'N':
        x--;
        ghuro(maze[x][y]);
        break;
        case 'S':
        x++;
        ghuro(maze[x][y]);
        break;
        case 'E':
        y++;
        ghuro(maze[x][y]);
        break;
        case 'W':
        y--;
        ghuro(maze[x][y]);
        break;
    }
}
int main()
{
    while(fs(r)==1&&fs(c)==1&&fs(y)==1)
    {
        cnt=0;
        if(r==0&&c==0&&y==0)
            break;
        Mems(maze,false);
        Mems(ara,-1);

        loop(i,1,r+1)
        loop(j,1,c+1)
        cin>>maze[i][j];
        x=1;
        ghuro(maze[x][y]);

    }

    return 0;
}
