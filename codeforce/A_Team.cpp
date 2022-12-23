#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> v1(3);
    int count = 0;
    int inc = 0;
    while (n--)
    {  inc =0;
        for (auto i = 0; i < 3; i++)
        {
            cin >> v1[i];
            if (v1[i] == 1)
            {
                inc++;
            }
        }
        if (inc > 1)
        {
            count++;
        }
    }

    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
