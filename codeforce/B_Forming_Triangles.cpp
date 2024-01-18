#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define re(i,a,b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll >
#define fibo(n) (pow(1.618,n)-pow((1-1.618),n))/sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (1LL*(a/gcd(a,b))*b)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
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
 
 
// function without recursion
// auto fun_name = [&](int ind){};
 
 
void solve(){
     ll n;
    cin>>n;
    vll v(n);
    f(i,0,n)cin>>v[i];
    if(n<3){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end()); 
    map<ll,ll> m;
    map<ll,ll> inI;
    f(i,0,n)
    m[v[i]]++;
    re(i,n-1,0)
    inI[v[i]]=i;
    ll ans =0 ;
    for(auto x: m)
    {
        if(x.second>2)
        {
            ll n1 = x.second;
            // 3 choose karna hai 
            ll r =1;
            ll ans1 =1;
            while(r<=3)
            {
                ans1 = (ans1 * n1)/r;
                r++;
                n1--;
            }
            ans+=ans1;
            // cout<<ans<<" ";
            
            ll it  =  inI[x.first];
             r=1;
             ans1 =1;
             n1= x.second;
            while(r<=2)
            {
                ans1 = (ans1 * n1)/r;
                r++;
                n1--;
            }
            ans += ans1*it;
            // cout<<ans<<" ";
        }
        if(x.second ==2)
        {
            ll it  = inI[x.first];
            ans += it;
        }
    }
    cout<<ans<<endl;
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
     int t;
     cin>>t;
  while(t--){
     solve();
    }
}
