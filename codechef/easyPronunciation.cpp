#include <iostream>
#include <string>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    string S;
    cin >> S;
    int count;
    if (n < 4)
    {
        cout << "YES" << endl;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            count = 0;
            if (S[i] != 'a' && S[i] != 'u' && S[i] != 'o' && S[i] != 'i' && S[i] != 'e')
            {
                for (int j = i; i < n; j++)
                {
                    if (S[j] != 'a' && S[j] != 'u' && S[j] != 'o' && S[j] != 'i' && S[j] != 'e')
                    {
                        count++;
                        i++;
                    }
                    else
                    {
                        i = j;
                        break;
                    }
                }
                if (count >= 4)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (count < 4)
        {
            cout << "YES" << endl;
        }
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
