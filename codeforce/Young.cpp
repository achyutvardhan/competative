#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int xi=0;
    int yi=0;
    int zi=0;
    for (auto i = 0; i < n; i++)
    {
        vector<int> v(3);
        for (auto i = 0; i <3; i++)
        {
            cin >> v[i];
          xi = xi+v[0];
          yi = yi + v[1];
          zi =zi + v[2];
        }
    }
    
    if (xi==0&&yi==0&&zi==0)
    {
       cout<<"YES";
    }else
    cout<<"NO";
    
}

int main()
{
    //      int t;
    //      cin>>t;
    //   while(t--){
    //      solve();
    //     }
    solve();
}
