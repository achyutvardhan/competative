#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int y;
    cin >> y;
    vector<int> v;

jump:
    y++;
    int temp_y = y;
    while (temp_y != 0)
    {
        int d = temp_y % 10;
        v.emplace_back(d);
        temp_y = temp_y / 10;
    }
    int c = 0;
    for (auto i = 0; i < 4; i++)
    {
        c = count(v.begin(), v.end(), v[i]);
        if (c > 0)
        {
            goto jump;
        }
    }
    cout<<y;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //      int t;
    //      cin>>t;
    //   while(t--){
    //      solve();
    //     }
    solve();
}
