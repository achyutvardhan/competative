
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    cout<<"enter array element\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = n - 1, k = 0;
    while ((i) != j && i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        for (k = i + 1; k <= n - 1; k++)
        {
            int tempC = arr[k];
            arr[k] = temp;
            temp = tempC;
        }
        i = i + 2;
    }
    // display
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int t;
    cout<<"enter number of test cases\n";
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
