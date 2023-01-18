#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    int n,y;
    cin>> n>>y;
    int bit=0;
    vector<int> v(n);
    for (auto i = 0; i < n; i++)
    {
        /* code */
        cin>>v[i];
        bit = bit|v[i];
    }
    int c=0;
   for (auto i = 0; i < y; i++)
   {
      int temp = bit;
      if (temp|i==y)
      {
        c++;
        cout<<i<<endl;
        break;
      }
      
   }
   if (c==0)
   {cout<<"-1"<<endl;}
   
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
