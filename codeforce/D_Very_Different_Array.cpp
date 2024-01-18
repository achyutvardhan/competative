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
    ll n, m;
    cin >> n >> m;
    vll ft(n);
    vll sec(m);
    f(i, 0, n) cin >> ft[i];
    f(i, 0, m) cin >> sec[i];
    ll l1 = 0;
    ll l2 = 0;
    ll r2 = m - 1;
    ll r1 = n - 1;
    sort(ft.begin(), ft.end(), greater<ll>());
    sort(sec.begin(), sec.end(),  greater<ll>());
    ll ans=0;
    while (l1<=r1)
    {
        ll val1 =  abs(ft[l1] - sec[r2]);
        ll val2 =  abs(ft[r1] - sec[l2]);
        ans+=max(val1,val2);
        if(val1>=val2){
            l1++;r2--;
        }else{
            l2++;r1--;
        }
    }
    
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
