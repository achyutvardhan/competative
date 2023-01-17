#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int x;
    cin>>x;
    if (x>100)
    {
       cout<<"2000"<<endl;
    }else if (x>70&&x<=100)
    {
        cout<<"500"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    
    
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
