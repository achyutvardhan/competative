#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
#define vpl vector<pll>
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
    cin>>n;
    vector<pll>v(n);
    ll p1=INT_MAX;
    ll p2=INT_MAX;
    ll p3=INT_MAX;
    vll c(3);
    c[0]= 0 ;
    c[1]=0 ;
    c[2]=0;
    f(i,0,n)
    {
       cin>>v[i].first;
       cin>>v[i].second;
       if (v[i].second ==11)
       {
         c[2]++;
       }else if(v[i].second ==01)
       {
        c[0]++;
        /* code */
       }
       else if(v[i].second ==10)
       {
        c[1]++;
       }
    }
    
    if(c[2]==0&&(c[1]==0||c[0]==0))
    {
        cout<<-1<<endl;
        return;
    }

     f(i,0,n)
     {
        if (v[i].second== 01)
        {
            p2 = min(p2,v[i].first);
        }else if (v[i].second==10)
        {
            p3 = min(p3,v[i].first);
        }else if (v[i].second==11)
        {
            p1 = min(p1,v[i].first);
        }
        
        
     }
     ll ans = min(p1,(p2+p3));
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
