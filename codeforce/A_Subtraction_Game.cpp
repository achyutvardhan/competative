#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define re(i,a,b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll >
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
#define mi  INT_MAX
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
    ll a,b;
    cin>>a>>b;
    if(min(a,b)>1)
    {
        cout<<min(a,b)-1<<endl;
        return;
    }
    cout<<max(a,b)+1<<endl;
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
