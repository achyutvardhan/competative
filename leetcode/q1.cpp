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
    vector<int> satisfaction(3);
     int liketime = 0;
        for (int i =0;i<satisfaction.size();i++)
        {
            cin>>satisfaction[i];
        }
        sort(satisfaction.begin(),satisfaction.end());
        for(int i=0;i<satisfaction.size();i++)
        {
            int j =1; int maxx= 0;
            for(int k=i;k<satisfaction.size();k++)
            {
                maxx += j*satisfaction[k];
                j++;
            }
            liketime = max(liketime,maxx);
        }
        if(liketime<0)
        {
            cout<<0;
        }else{
          cout<<liketime;
        }
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
