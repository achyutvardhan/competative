#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, v;
    cin >> n >> k >> v;
    int arr[n];
    int sum = 0;
    int total = (n + k) * v;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i - 1];
        sum += arr[i - 1];
    }
    int reSum = total - sum;
    if (reSum <= 0 || reSum % k != 0)
        cout << "-1" << endl;
    else
    {
        int val = reSum / k;
        cout << val << endl;
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
