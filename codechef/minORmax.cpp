#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int B[n];
    for (auto i = 1; i <= n; i++)
        cin >> B[i];
    int mOM = 0, m = 0, M = 0;
    if (n == 1)
        cout << "yes";
    else
    {
        for (int i = 0; i != (n - 1); i += 2)
        {
            if (B[i] > B[i + 1] && B[i + 1] > B[i + 2])
            {
                cout << "NO" << endl;
                return;
            }
            else if (B[i] < B[i + 1] && B[i + 1] < B[i + 2])
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                mOM++;
            }
        }

        if (mOM == 0)
        {
            //max
            int c1 = 0;
            for (int i = 1; i <= n; i++)
            {
                if (B[i - 1] <= B[i])
                    c1++;
            }
            if (c1 != (n - 2))
            {
                cout << "NO" << endl;
                return;
            }

            // min
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (B[i - 1] == B[0])
                    count++;
            }
            if (count != n)
            {
                cout << "NO" << endl;
                return;
            }

            cout << "Yes" << endl;
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
