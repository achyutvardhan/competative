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
    vector <int> v(n);
    for (auto i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v[i]=abs(temp);  
    }
    sort(v.begin(),v.end());
    if ((v[0]-1)<0)
    {
        cout<<"-1"<<endl;
    }else
    cout<<v[0]-1<<endl;
    
    
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
