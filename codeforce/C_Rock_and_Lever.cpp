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

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    f(i, 0, n)
            cin >>
        v[i];
    // we have to look for MSB as 1;
    // max 30 bits
    ll bit_shift = 1ll<< 30 ;
    //1000000000
    vll temp = v;
    ll count = 0;
    vll msb;
   
    f(i, 0, n)
    {
        bit_shift = 1ll << 30;
        count = 0;
        while (true)
        {
            if (temp[i] & bit_shift)
                break;
            count++;
           bit_shift =  bit_shift >> 1;
        }
        msb.push_back(30-count);
    }
    map<ll,ll> m;
    f(i,0,n)
    {
        m[msb[i]]++;
    }
    ll c_pair =0;
    for(auto it : m)
    {
        ll num = it.second;
        c_pair += (num*(num-1))/2;
    }
    cout<<c_pair<<endl;
    
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
