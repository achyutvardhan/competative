#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void rotation(int arr[2][2])
{
    static int count = 0;
    if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
    {
        cout << "YES"
             << "\n";
        count = 0;
        return;
    }
    else
    {
        if (count == 4)
        {
            cout << "NO"
                 << "\n";
            count = 0;
            return;
        }

        count++;
        // shift of values or rotating 90* clockwise
        int temp_st = 0, temp = 0;
        for (auto j = 0; j < 2; j++)
        {
            temp_st = arr[0][j];
            arr[0][j] = temp;
            temp = temp_st;
        }

        for (auto i = 1; i >= 0; i--)
        {
            temp_st = arr[1][i];
            arr[1][i] = temp;
            temp = temp_st;
        }

        arr[0][0] = temp;
        rotation(arr);
    }
}
void solve()
{
    int arr[2][2];
    for (auto i = 0; i < 2; i++)
    {
        for (auto j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotation(arr);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
