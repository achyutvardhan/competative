#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char f = s[0];
    char l = s[n - 1];
    int c = 1;
    while (f != l && c <= (int)(n / 2))
    {
        cout << (int)f << " " << (int)l << endl;
        if ((int)f > (int)l)
        {
            char ch = f;
            f = l;
            l = ch;
        }
        cout << (int)f << " " << (int)l << endl;
        f++;
        l--;
        c++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] > s[i + 1] && s[i] != s[i + 1])
        {
            cout << "test" << endl;
            count++;
            cout << "NO" << endl;
            break;
        }
    }
    if (count == 0)
    {
        cout << "YES" << endl;
    }
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
