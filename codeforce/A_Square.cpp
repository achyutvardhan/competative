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
    ll x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    ll s1 = 0;
    if (x1 == x2)
        s1 = sqrt((y2 - y1) * (y2 - y1));
    else if (x1 == x3)
        s1 = sqrt((y3 - y1) * (y3 - y1));
    else if (x1 == x4)
        s1 = sqrt((y4 - y1) * (y4 - y1));
    else if (x2 == x3)
        s1 = sqrt((y3 - y2) * (y3 - y2));
    else if (x2 == x4)
        s1 = sqrt((y4 - y2) * (y4 - y2));
    else if (x3 == x4)
        s1 = sqrt((y4 - y3) * (y4 - y3));
    ll s2 = 0;
    if (y1 == y2)
        s2 = sqrt((x2 - x1) * (x2 - x1));
    else if (y1 == y3)
        s2 = sqrt((x3 - x1) * (x3 - x1));
    else if (y1 == y4)
        s2 = sqrt((x4 - x1) * (x4 - x1));
    else if (y2 == y3)
        s2 = sqrt((x3 - x2) * (x3 - x2));
    else if (y2 == y4)
        s2 = sqrt((x4 - x2) * (x4 - x2));
    else if (y3 == y4)
        s2 = sqrt((x4 - x3) * (x4 - x3));
    cout<<s1*s2<<endl;

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
