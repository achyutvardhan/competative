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
    vll a(n);
    vll b(n);
    vll c(2 * n);
    ll count = 0;
    ll max_c = 1;
    f(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == a[i - 1])
        {
            count++;
        }
        else
        {
            max_c = max(count, max_c);
        }
    }
    count = 0;
    f(i, 0, n)
    {
        cin >> b[i];
        if (b[i] == b[i - 1])
        {
            count++;
        }
        else
        {
            max_c = max(count, max_c);
        }
    }
    if (a[0] != b[n - 1] && a[0] != b[0] && a[n - 1] != b[0] && a[n - 1] != b[n - 1])
    {
        cout << max_c << endl;
        return;
    }

    count = 0;
    // ss
    ll a_t = n - 1;
    ll b_t = 0;
    if (a[n - 1] == b[0])
    {
        f(i, 0, n)
        {
            if (a[a_t] != a[a_t-1]&&b[b_t] != b[b_t+1])
            {
                break;
            }
            if (a[a_t] == a[a_t-1] )
            {
                count++;
                --a_t;
            }
            if (b[b_t] == b[b_t+1])
            {
                count++;
                ++b_t;
            }
            
            
        }
        max_c = max(max_c ,count+2);
    }
    count =0;
    //sr
    a_t = n-1;
    b_t = n-1;
    if (a[n - 1] == b[n-1])
    {
        f(i, 0, n)
        {
            if (a[a_t] != a[a_t-1]&&b[b_t] != b[b_t-1])
            {
                break;
            }
            if (a[a_t] == a[a_t-1])
            {
                count++;--a_t;
            }
            if ( b[b_t] == b[b_t-1])
            {
                count++;--b_t;
            }
            
            
        }
        max_c = max(max_c ,count+2);
    }

    //rr
    count =0;
    a_t = 0;
    b_t = n-1;
    if (a[0] == b[n-1])
    {
        f(i, 0, n)
        {
            if (a[a_t] != a[a_t+1]&&b[b_t] != b[b_t-1])
            {
                break;
            }
            if (a[a_t] == a[1+a_t])
            {
                count++;++a_t;
            }
            if ( b[b_t] == b[b_t-1])
            {
                count++;b_t--;
            }
            
        }
        max_c = max(max_c ,count+2);
    }
    //rs
    count =0;
    a_t = 0;
    b_t = 0;
    if (a[0] == b[0])
    {
        f(i, 0, n)
        {
            if (a[a_t] != a[a_t+1]&&b[b_t] != b[1+b_t])
            {
                break;
            }
            if (a[a_t] == a[1+a_t])
            {
                count++;++a_t;
            }
            if (b[b_t] == b[1+b_t])
            {
                count++;++b_t;
            }
            
        }
        max_c = max(max_c ,count+2);
    }

    cout<<max_c<<endl;

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
