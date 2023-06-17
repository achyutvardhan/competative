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
    vll a(n), b(n);
    f(i, 0, n)
            cin >>
        a[i];
    f(i, 0, n)
            cin >>
        b[i];
    
    if(a[n-1]>b[n-1]) swap(a[n-1],b[n-1]);
    f(i,0,n-1)
    if(a[i]>b[i])swap(a[i],b[i]);

    ll max1 = *max_element(a.begin(),a.end());
    ll max2 = *max_element(b.begin(),b.end());

    if(max1 != a[n-1]||max2 !=b[n-1])
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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
