#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
///.........Bit_Manipulation...........///
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

void solve()
{
    ll n, x;
    cin >> n >> x;
    if ((x < 0 && abs(x) >= n) || (x > 0 && n > x))
    {
        cout << -1 << endl;
        return;
    }
    char plus = '+';
    char minus = '-';
    char multi = '*';
    string ans = "";
    if (x < 0)
    {
        ll temp = abs(x) + 1;
        ll more = temp - n;
        while (temp != 0)
        {
            ans = ans + minus;
            temp--;
        }
        while (more != 0)
        {
            ans += multi;
            more--;
        }
    }
    else{
        if (x>=n)
        {
            ll temp = x-1;
            ll more = n-temp;
            while (temp!=0)
            {
                ans+=plus;
                temp--;
            }
            while (more!=0)
            {
                ans+=multi;
                more--;
            }
            
            
        }else
        {
            
        }
        
        
        
    }
    

    cout<<ans<<endl;
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
