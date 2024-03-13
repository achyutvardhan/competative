#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define re(i,a,b) for (ll i = a; i >= b; i--)
#define vsi vector<string>
#define fibo(n) (pow(1.618,n)-pow((1-1.618),n))/sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (1LL*(a/gcd(a,b))*b)
#define  fo(v) for(auto &x:v)cin>>x;
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
#define mi  INT_MAX
#define CeilDiv(a,b) ((a+b-1)/b)
#define re return
#define fix(prec) {cout << setprecision(prec) << fixed;}
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
    vll ar(n);
    fo(ar);
    if(n==1){cout<<1<<endl; re;}
    sort(ar.begin(),ar.end());
    vector<pll> v;
    v.push_back({ar[0],1});
    f(i,1,n)
    {
       if(ar[i] == ar[i-1])
       v.back().second++;
       else
       v.push_back({ar[i],1});
    }
    if(v.size()==1){cout<<v[0].second<<endl;re;}
    ll ans=0;
    if(v[1].first - v[0].first==1)
    ans=max(v[0].second,v[1].second);
    else ans += v[0].second+v[1].second;

    f(i,2,v.size())
    {
        if(v[i].first - v[i-1].first == 1 && v[i].second>v[i-1].second)
        ans += (v[i].second-v[i-1].second);
        else if(v[i].first - v[i-1].first != 1)
        ans+=v[i].second;
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
