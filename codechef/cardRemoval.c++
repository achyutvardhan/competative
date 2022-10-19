#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    int prevC = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == n - 1)
            break;

        if (prevC < count)
            prevC = count;
    }
    if (prevC == 0)
        prevC++;

    cout << n - prevC;
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
