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
    ll x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;
    ll l1 = to_string(x1).length();
    ll l2 = to_string(x2).length();
    string s1 = to_string(x1);
    string s2 = to_string(x2);

    if ((l1 + p1) > (l2 + p2))
    {
        cout << ">" << endl;
        return;
    }
    if ((l1 + p1) < (l2 + p2))
    {
        cout << "<" << endl;
        return;
    }
    if ((l1 + p1) == (l2 + p2))
    {
        ll c = 0;
        for (ll i = 0; i < min(l1, l2); i++)
        {
            if ((s1[i] - '0') > (s2[i] - '0'))
            {
                cout << ">" << endl;
                c++;
                break;
            }
            if ((s1[i] - '0') < (s2[i] - '0'))
            {
                cout << "<" << endl;
                c++;
                break;
            }
        }
        if (c == 0)
        {
            ll cp = 0;
            for (ll i = min(l1, l2); i < max(l1, l2); i++)
            {
                if (l2 > l1)
                {
                    if ((s2[i] - '0') > 0)
                    {
                        cout << "<" << endl;
                        cp++;
                        break;
                    }
                }
                else
                {
                    if ((s1[i] - '0') > 0)
                    {
                        cout << ">" << endl;
                        cp++;
                        break;
                    }
                }
            }
            if (cp == 0)
            {
                cout << "=" << endl;
            }
        }
        return;
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
