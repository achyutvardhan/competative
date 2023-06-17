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
    ll m;
    cin >> m;
    vector<vll> v(m);
    f(i, 0, m)
    {
        ll n;
        cin >> n;
        f(j, 0, n)
        {
            ll x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    vll ans(m);
    mll ma;
    for (ll k = m - 1; k >= 0; k--)
    {
    bool winner =false;
        f(j, 0, v[k].size())
        {
            if (ma.find(v[k][j]) == ma.end())
            {
            // cout<<v[k][j]<<" ";
             winner = true;
                ans[k] = v[k][j];
            }
            ma[v[k][j]] = 1;
        }
        if(winner==false){
        cout<<"-1"<<endl;
        return;
        }
    }
    f(j, 0, ans.size())
            cout<< ans[j]<<" ";
    cout << endl;
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
