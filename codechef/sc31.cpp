#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 1; i <= n; i++)
        cin >> s[i - 1];
    int winner;
    if (n > 1)
    {
        for (int i = 1; i < n; i++)
        {
            int cont1, cont2 = 0;
            if (i == 1)
            {
                cont1 = stoi(s[i - 1], 0, 2);
                cont2 = stoi(s[i], 0, 2);
                winner = cont1 ^ cont2;
            }
            else
            {
                cont1 = winner;
                cont2 = stoi(s[i], 0, 2);
                winner = cont1 ^ cont2;
            }
        }
        std::string str = std::bitset<10>(winner).to_string();

        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
                count++;
        }
        cout << count << endl;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < s[0].length(); i++)
        {
            if (s[0][i] == '1')
                count++;
        }
        cout << count << endl;
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
