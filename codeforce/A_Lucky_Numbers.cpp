#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i <= b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
 
void solve(){
    ll l,r;
    cin>>l>>r;
    ll diff=-1;
    ll ans=0;
    f(i,l,r)
    {
       string s1 = to_string(i);
       sort(s1.begin(),s1.end());
       if(diff<(s1.back()-s1[0]))
       {
         diff =(s1.back()-s1[0]);
         ans =i;
       }
       if(diff==9) break;
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
