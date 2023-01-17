#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int c_p = 0;
    int c_n = 0;
    vector<int> v(3);
    for (auto i = 0; i < 3; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
            c_p++;
        if (v[i] < 0)
            c_n++;
    }

    if (c_p>0&&c_n>0)
    {
       cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

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
