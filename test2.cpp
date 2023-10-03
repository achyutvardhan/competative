#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
int main()
{
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(int i =0;i<n;i++)
   cin>>v[i];
   set<ll> st(v.begin(),v.end());
   ll sum =0;
   for(auto x:st)
   {
     sum+= pow(2,x);
   } 
   cout<<sum<<endl;
    return 0;
}
