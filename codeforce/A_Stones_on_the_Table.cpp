#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0;
    for (auto i = 1; i < n; i++)
    {
        if (s[i-1]==s[i])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    
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
