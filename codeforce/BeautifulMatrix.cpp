#include <bits/stdc++.h>
using namespace std;

void solve()
{
   auto temp_row = 0;
   auto temp_col = 0;
   for (auto i = 0; i < 5; i++)
   {
      vector<int> v(5);
      for (auto j = 0; j < 5; j++)
      {
         cin >> v[j];
         if (v[j] == 1)
         {
            temp_col = j + 1;
            temp_row = i + 1;
         }
      }
   }

   auto sum = abs(3-temp_col)+abs(3-temp_row);
   cout<<sum<<endl;
}

int main()
{
   //      int t;
   //      cin>>t;
   //   while(t--){
   //      solve();
   //     }
   solve();
}
