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
///.........Bit_Manipulation...........///
#define bit (1ll << 35) - 1
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    
    vll small; //a min
    vll big;  //b max
    small.emplace_back(a);
    big.emplace_back(b);
    ll i=1;
    while(big.size()<n/2)
    {
       if(i!=a&&i!=b)
       big.emplace_back(i);
       i++;
    }
    ll en = n;
    while(small.size()<n/2)
    {
        if(en!=a&&en!=b)
        small.emplace_back(en);
        en--;
    }
    ll ma  = *max_element(big.begin(),big.end());
    ll sm = *min_element(small.begin(),small.end());
    if(ma!=b||sm!=a)
    {
        cout<<-1<<endl;
        return;
    }
    f(i,0,small.size()) cout<<small[i]<<" ";
    f(i,0,big.size()) cout<<big[i]<<" ";
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
