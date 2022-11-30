#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{

    int n;
    int t;
    cin >> n >> t;
    string S;
    cin >> S;
    while (t--)
    {
        for (auto i = 0; i < n; i++)
        {

            if (S[i] < S[i + 1])
            {
                swap(S[i], S[i + 1]);
                i++;
            }
        }
    }
    cout << S;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //      int t;
    //      cin>>t;
    //   while(t--){
    //      solve();
    //     }
    solve();
}
