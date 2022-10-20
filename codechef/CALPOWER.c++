#include <bits/stdc++.h>
using namespace std;
int ord(char ch)
{
    int j = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (ch == i)
        {
            j++;
            break;
        }
        j++;
    }
    return j;
}
void solve()
{
    string s;
    cin >> s;
    int power = 0;
    sort(s.begin(), s.end());
    int n = s.length();
    for (int i = 1; i <= n; i++)
    {
        power += i * ord(s[i - 1]);
    }
    cout << power << endl;
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
