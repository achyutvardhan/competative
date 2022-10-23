#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s;
    cin >> n >> s;
    int p[n];
    int Ldefender = 0;
    int cdefen = 0;
    int cforw = 0;
    int Lforward = 0;
    for (int i = 1; i <= n; i++)
        cin >> p[i - 1];
    int po[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> po[i - 1];
        if (po[i - 1] == 1)
        {
            Lforward = p[i - 1];
            cforw++;
        }
        else
        {
            Ldefender = p[i - 1];
            cdefen++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (po[i] == 1 && Lforward > p[i])
            Lforward = p[i];
        if (po[i] == 0 && Ldefender > p[i])
            Ldefender = p[i];
    }
    // cout<<(Lforward+Ldefender+s)<<endl;
    if ((Lforward + Ldefender + s) <= 100 && cdefen > 0 && cforw > 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
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
