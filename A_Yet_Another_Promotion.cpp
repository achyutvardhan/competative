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
    ll a, b, req_pot, min_pot_first;
    cin >> a >> b >> req_pot >> min_pot_first;

    if (min_pot_first == req_pot)
    {
        cout << min(a * req_pot, b * req_pot) << endl;
        return;
    }

    ll total_coin_a = (min_pot_first * (req_pot / (min_pot_first + 1))) * a;
    ll total_coin_b = b * req_pot;
    req_pot -= ((min_pot_first + 1) * (req_pot / (min_pot_first + 1)));

    if (req_pot != 0 && req_pot < min_pot_first)
    {
        total_coin_a += req_pot * min(b, a);
    }
    else if (req_pot != 0)
    {
        total_coin_a += req_pot * b;
    }

    cout << min(total_coin_a, total_coin_b) << endl;
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
