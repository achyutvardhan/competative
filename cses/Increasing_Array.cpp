#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll,ll>
#define mp map<pair<ll,ll>,ll>
#define pll pair<ll,ll>
///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
 
void solve(){
    ll n;
    cin>> n;
    vll v(n);
    for (auto i = 0; i <n; i++)
    cin>>v[i];
    ll count =0;
    for (auto i = 1; i < n; i++)
    {
       if (v[i]<v[i-1])
       {
          count += (v[i-1]-v[i]);
          v[i]=v[i-1];
       }
       
    }
    cout<<count;
    
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
