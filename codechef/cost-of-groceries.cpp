#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v(n);
    for (auto i = 0; i < v.size(); i++)
    {
        cin>>v[i].first;
    }
    for (auto i = 0; i < v.size(); i++)
    {
        cin>>v[i].second;
    }
    int ans=0;
    for (auto i = 0; i < v.size(); i++)
    {
       if (v[i].first>=x)
       {
         ans += v[i].second;
       }
       
    }

    cout<<ans<<"\n";
    
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
