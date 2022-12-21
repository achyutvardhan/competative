#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int x;
    cin >> x;
    if (x < 4)
    {
        cout << "MILD"
             << "\n";
    }
    else if (x >= 4 && x < 7)
        cout << "MEDIUM"
             << "\n";
    else
        cout << "HOT"
             << "\n";
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
