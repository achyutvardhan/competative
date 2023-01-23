#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
using ll= long long;  
///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
 
void solve(){
    int n;
    cin>>n;
    vll v(n);
    for (auto i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    mll ltor;
    mll rtol;
    ll sum =0 ;
    ll res =0;
    for (auto i = 0; i < n; i++)
    {
        ltor[v[i]]++;
    }
   for (auto i = n-1; i >=0; i--)
   {
      rtol[v[i]]++;
      ltor[v[i]]--;
      sum+=ltor[v[i]+1];
      sum-=rtol[v[i]-1];
      res = max(res,sum);
   }
   cout<<res<<endl;
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
