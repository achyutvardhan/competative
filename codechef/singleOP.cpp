#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int number = stoi(s,0,2);
    int max_value =0;
    int prev=0;
    int y=0;
    for (int i = 1; i <= n; i++)
    {
         int value = number/(int)pow(2,i);
         std::string str = std::bitset<64>(value).to_string().substr(64 - n - 1);
         int num  =  stoi(str,0,2);
         max_value = num ^ number;
         if (max_value >= number && max_value > prev )
         {
            y=i;
            prev = max_value;
         }
         
    }
    cout<<y<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
