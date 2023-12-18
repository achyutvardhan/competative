#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define fibo(n) (pow(1.618,n)-pow((1-1.618),n))/sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (1LL*(a/gcd(a,b))*b)
#define vsi vector<string, ll >
#define vll vector<ll>
#define mll map<ll,ll>
#define mp map<pair<ll,ll>,ll>
#define pll pair<ll,ll>
#define mi  INT_MAX
#define CeilDiv(a,b) ((a+b-1)/b)
#define mod 1000000007
///.........Bit_Manipulation...........///
#define bit (1ll<<35)-1
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
 
void solve(){
ll m;
cin>>m;
vector<ll> v;
vector<ll> vp;
f(i,0,m)
{
    ll t;
    ll bi;
    cin>>t;
    cin>>bi;
    if(t==1)
    {
        ll ans = 1ll<<bi;
        v.push_back(ans);
    }
    else{
        vp.push_back(bi);
    }
}
for(auto &x: vp)
{
    bool  flag  = false;
    ll n = v.size();
    for(ll i =0 ;i <n-1;i++)
    {
        ll sum =0 ;
        for(ll j = i; j<n;j++)
        {
            sum+=v[j];
            if(sum==x)
             {
                flag = true;
                break;
             }
        }
        if(flag) break;
    }
    if(flag )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
     int t=1;
  while(t--){
     solve();
    }
}
