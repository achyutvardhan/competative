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
    ll n;
    cin >> n;
    vll v1;
    vll v2;
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        if (x < 0)
            v2.emplace_back(x);
        else
            v1.emplace_back(x);
    }

    sort(v2.begin(), v2.end());
    sort(v1.begin(), v1.end());
    ll ans = 0;
    ll s1 = v1.size();
    if(v2.size() == 1 && v1.size() == 1){
    ans = v1[s1-1]*v2[v2.size()-1];
    cout<<ans<<endl;
    return;
    }
    if (v2.size() > 1 && v1.size() > 1)
    {
        ans = max((v2[0] * v2[1]), (v1[s1-1] * v1[s1-2]));
    }
    else if (v2.size() <= 1)
    {
        ans = v1[s1-1] * v1[s1- 2];
    }
    else
        ans = v2[0] * v2[1];

    cout << ans << endl;
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
