#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string>
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define fo(v)         \
    for (auto &x : v) \
        cin >> x;
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
#define r return
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
    string s;
    cin >> s;
    vll v(n);
    f(i,0,n)v[i] = s[i]-'0';
    f(i,1,n)  v[i]+=v[i-1];
    //  f(i, 0, n) cout<<s[i]<<" " ; cout<<endl;
    ll ans = -1;
    if(v[n-1]>=(n+1)/2)
    ans =0;
    f(i, 0, n)
    {
        ll leftc0 = (i + 1) - v[i];
        ll leftC1 = v[i];
        ll rightc1 = v[n - 1] - v[i];
        ll rightc0 = n - i - 1 - rightc1;
        //    cout<<leftc0 <<" "<<leftC1<<" "<<rightc1<<" "<<rightc0<<" ";cout<<endl;
        if (leftc0 >= leftC1 && rightc1 >= rightc0)
        {
            if (abs(n - 2 * ans) > abs(n - 2 * (i + 1)))
                ans = i + 1;
        }
    }
    if (ans == -1)
        cout << 0 << endl;
    else
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
