#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
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
    ll n;
    cin>>n;
    vll v(n);
    vll even;
    vll odd;
    f(i,0,n){
    cin>>v[i];
    if(v[i]%2==0)
    even.push_back(i+1);
    else
    odd.push_back(i+1);
    }

    if(odd.size()>=3)
    {
        cout<<"YES"<<endl;
        cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    }else if(odd.size()>0&&even.size()>=2){
        cout<<"YES"<<endl;
        cout<<even[0]<<" "<<even[1]<<" "<<odd[0]<<" "<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

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
