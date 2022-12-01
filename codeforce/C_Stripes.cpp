#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    vector<vector<char>> v(8, vector<char>(8));
    for (auto i = 0; i < 8; i++)
    {
        for (auto j = 0; j < 8; j++)
        {
            cin >> v[i][j];
        }
    }
   
    int c_hor = 0;
    int c_ver = 0;
    for (int i = 0; i < 8; i++)
    {
        c_hor =0;
        c_ver = 0;
        for (int j = 0; j < 8; j++)
        {
            if (v[j][i] != 'B')
            {
                break;
            }
            else
                c_ver++;
        }
        if (c_ver == 8)
        {
            cout << "B"
                 << "\n";
            break;
        }
        for (int j = 0; j < 8; j++)
        {
            if (v[i][j] != 'R')
            {
                break;
            }
            else
                c_hor++;
        }
        if (c_hor == 8)
        {
            cout << "R"
                 << "\n";
            break;
        }
    }
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
