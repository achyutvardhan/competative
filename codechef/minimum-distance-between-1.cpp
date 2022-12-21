#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int diff = 1;
    auto j = 0;
    for (auto i = 0; i < n; i++)
    {
       if (s[i] == '1' && s[j] == '1' && i>j&&((i%2==0&&j%2==0)||(i%2!=0&&j%2!=0)))
       {
          diff = 2;
       }else if (s[i] == '1' && s[j] == '1' && i>j&&((i%2!=0&&j%2==0)||(i%2==0&&j%2!=0)))
       {
        diff =1;
       }else{
        
       }
       
       
    }
    cout << diff << "\n";
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
