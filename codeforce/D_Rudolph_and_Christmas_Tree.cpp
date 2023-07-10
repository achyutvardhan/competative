#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define ld long double
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
    ld n,d,h;
    cin>>n>>d>>h;
    vll v(n);
    f(i,0,n)
    cin>>v[i];
    // find total triangle and trapezium
    ld trg = 1.0;
    ld area =0;
    f(i,0,n-1)
    {
        if(v[i]+h<=v[i+1])
        trg++;
        else{
          ld h1 = (v[i]+h)-v[i+1];
          ld b1 =  (h1*((d/2)/h))*2;
        //   cout<<" "<<b1<<endl;
          area += ((b1+d)/2)*(v[i+1]-v[i]);
        }
    }

    // cout<<area<<endl;
        area+= ((d*h)/2)*trg;
        cout<<setprecision(7)<<fixed;
    cout<<area<<endl;
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
