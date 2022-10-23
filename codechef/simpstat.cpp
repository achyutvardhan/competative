#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int num = (n - (2 * k));
    for (int i = 1; i <= n; i++)
        cin >> arr[i - 1];
    float avg = 0;
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            avg += arr[i];
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        cout << (float)avg / n << endl;
    }
    else
    {
        int l = -1, s = n;
        sort(arr, arr + n);
        while (k != 0)
        {
            l++;
            s--;
            k--;
        }
        while (l != s - 1)
        {
            l++;
            avg += arr[l];
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        cout << (float)avg / num << endl;
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
