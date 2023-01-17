#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
   ll n;
   cin>>n;
   vector <ll>v(2*n);
   for (auto i = 0; i < 2*n; i++)
   {
      cin>>v[i];
   }
   sort(v.begin(),v.end());
   
   
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
