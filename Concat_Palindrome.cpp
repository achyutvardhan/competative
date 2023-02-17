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
    ll n, m;
    cin >> n >> m;
    string a;
    string b;
    cin >> a >> b;
    map<char, int> m1;

    if (m > n)
    {
        swap(a, b);
        swap(m, n);
    }

    f(i, 0, n)
        m1[a[i]]++;

    f(i, 0, m)
        m1[b[i]]++;

    ll cot = 0;
    for (char a = 'a'; a < 'a' + 24; ++a)
    {
        if (m1[a] % 2 != 0)
        {
            cot++;
        }
    }
    if (cot > 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (m == n)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        f(i, 0, n)
        {
            if (a[i] != b[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    else
    {
        
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
