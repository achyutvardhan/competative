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
    vll v(n);
    ll count = 0;
    f(i, 0, n)
    {
        cin >>
            v[i];
        if (v[i] < 0)
            count++;
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll score = 0;
    f(i, 0, n)
    {
        if (v[i] > 0)
            score++;
        else
            score--;
        cout << score << " ";
    }
    cout << endl;
    // minimum
    ll temp =count;
    while (count--)
    {
        cout<<1<<" "<<0<<" ";
    }
    if((temp*2)<n)
    {
        ll  diff = n- (temp*2);
        ll c2 =0;
        while (diff--)
        {
            c2++;
            cout<<c2<<" ";
        }
        
    }
    cout<<endl;
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
