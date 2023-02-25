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
    string str = to_string(n);
    ll pos = 0;
    ll Lastdigit = str[str.size()-1] - '0';
    if (Lastdigit % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll cou = 0;
        for (ll i = 0; i < n; i++)
        {
            ll digit = str[i] - '0';
            if (digit % 2 == 0)
            {
                pos = i + 1;
                break;
            }else{
                cou++;
            }
        }
        if (cou == str.size())
        {
           cout<<-1<<endl;
            return;
        }
        
        if (pos==1)
        {
            cout<<1<<endl;
        }else
        {
            cout<<2<<endl;
        }
        
        
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