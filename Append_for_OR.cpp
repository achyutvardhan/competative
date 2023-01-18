#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
///.........Bit_Manipulation...........///
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
 
void solve(){
    int n,y;
    cin>> n>>y;
    int bit=0;
    vector<int> v(n);
    for (auto i = 0; i < n; i++)
    {
        cin>>v[i];
        bit = bit|v[i];
    }
    
    for (auto i = 0; i < 32; i++)
    {
        if ((bit&(1ll<<i))&& !(y&(1ll<<i)))
        {
           cout<<"-1"<<endl;
           break;
        }else if(!(bit&(1ll<<i))&&(y&(1ll<<i)))
        {
            bit = bit|
        }
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
