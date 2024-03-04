#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll>
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
#define fix(prec)                            \
    {                                        \
        cout << setprecision(prec) << fixed; \
    }
#define mod 1000000007
///.........Bit_Manipulation...........///
#define bit (1ll << 35) - 1
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

// function without recursion
// auto fun_name = [&](int ind){};

void solve()
{
    ll n;
    cin >> n;
    string s1 = "";
    string s2 = "";
    cin >> s1 >> s2;
    string ans = "";
    ll ans1 = 1;
    ll i = 0;
    ll j = 0;
    ans.push_back(s1[0]);
    f(i, 0, n)
    {

        if (s1[i + 1] == s2[i]) // 0/1
        {
            ans1++;
            ans.push_back(s1[i + 1]);
        }
        if (s1[i + 1] == '0' && s2[i] == '1')
        {
            ans1=1;
            ans.push_back('0');
        }
        if (s2[i] == '0' && s1[i + 1] == '1')
        {
            ans.push_back('0');    
            i++;
            j = i;
            break;
        }
        j = i;
    }
    // cout<<j<<endl;
    if (j < n)
    {
        for (int k = j; k < n; k++)
        {
            ans.push_back(s2[k]);
        }
    }
    cout << ans << endl;
    cout << ans1 << endl;
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
