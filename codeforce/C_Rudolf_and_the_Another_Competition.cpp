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
     ll n,m,h;
     cin>>n>>m>>h;
     vector<vll> v(n,vll (m));
     f(i,0,n)
     f(j,0,m)
     cin>>v[i][j];
     f(i,0,n)
     sort(v[i].begin(),v[i].end());

     vector<pair<ll,ll>> points(n);
     ll count =0;
     f(i,0,n)
     {
       ll sum=0;
       ll penalty =0 ;
       count =0;
       f(j,0,m)
       {
         if(sum+v[i][j]<=h)
         {
            sum+=v[i][j];
            penalty+=sum;
            count++;
         }else{
            break;
         }
       }
       points[i].first=count;
       points[i].second = penalty;
     }
     ll pos=1;
     f(i,1,n)
     {
        if(points[0].first<points[i].first)
        pos++;
        else if(points[0].first==points[i].first)
        {
            if(points[0].second>points[i].second)
            pos++;
        }
     }
     cout<<pos<<endl;
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
