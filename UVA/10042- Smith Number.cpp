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
#define ull unsigned long long int
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
#define ubound(d,val)  int (upper_bound (d.begin(), d.end(), val) - d.begin())
#define lbound(d,val)  int (lower_bound (d.begin(), d.end(), val) - d.begin())
#define M 65006
using namespace std;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ll,bool> pib;


//FAST_INPUT
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


bool mark[M+3]= {};
vi num;
int len;
void siv()
{
    for(int i=2; i*i<=M; i++)
        if(!mark[i])
            for(int j=i; i*j<=M; j++)
                mark[i*j]=true;

    for(int i=2; i<=M; i++)
        if(!mark[i])
            num.pb(i);
    len=num.size();
}

int smc(int tmp)
{
    int sum=0;
    while(tmp)
    {
        sum+=(tmp%10);
        tmp/=10;
    }
    return sum;
}

bool dekho(int n)
{
    int sum,bum=0,tmp=n;

    sum=smc(n);

    for(int i=0;i<len&&num[i]*num[i]<=n;i++)
    if(n%num[i]==0)
    {
        int cnt=0;
        while(n%num[i]==0)
        {
            n/=num[i];
            cnt++;
        }
        bum+=smc(num[i])*cnt;
    }
    if(n>1&&n!=tmp)
        bum+=smc(n);
    return (sum==bum);
}
int main()
{
    int n,test;
    siv();

    fs(test);
    Sfor(test)
    {
        fs(n);
        while(!dekho(++n));
        pf("%d\n",n);
    }
    return 0;
}


