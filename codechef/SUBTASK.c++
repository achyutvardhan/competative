#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            count++;
        
    }

    if (count == n)
    {
        cout << 100 << endl;
    }
    else
    {
        count =0;
        for (int i = 0; i < m; i++)
        {
           if (arr[i]==1)
           {
            count++;
           }
        
        }
        if (count ==m)
        {
            cout<<k<<endl;
        }else{
            cout<<0<<endl;
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
