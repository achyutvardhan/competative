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
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    map<pair<int,int>,int> m;
    for (auto i = 0; i <n; i++)
    {
        cin>>v[i].first;   
    }

    for (auto i = 0; i <n; i++)
    {
        cin>>v[i].second; 
        m[{v[i].first,v[i].second}]=i+1;
    }
    
    sort(v.begin(),v.end());
    cout<<m[{v[n-1].first,v[n-1].second}]<<endl;
    

   
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
