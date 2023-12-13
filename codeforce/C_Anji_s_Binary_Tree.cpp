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
    string s;
    cin >> s;
    vll le(n), ri(n);
    for (int i = 0; i < n; i++)
        cin >> le[i] >> ri[i];

    vll lp(n, -1), rp(n, -1);
    vll ans(n);

    for (int i = 0; i < n; i++)
    {
        if (le[i] == 0 && ri[i] == 0)
            ans[i] = 0;
        else
            ans[i] = INT_MAX;

        if (le[i])
            lp[le[i] - 1] = i;

        if (ri[i])
            rp[ri[i] - 1] = i;
    }

    set<pair<ll,ll>> st;
    f(i,0,n) st.insert({ans[i],i});

    while(!st.empty())
    {
        auto it = *st.begin();
        ll x= it.first;
        ll i = it.second;
        st.erase(st.begin());
        

        if(x>ans[i])continue; 
        // left
        if(lp[i]!=-1) // if left parent exist
        {
            if(ans[lp[i]] > x + (s[lp[i]]=='L'?0:1))
            {
               ans[lp[i]] = x+(s[lp[i]]=='L'?0:1);
               st.insert({ans[lp[i]],lp[i]});
            }
        }
        
        //right
        if(rp[i]!=-1)
        {
            if(ans[rp[i]] > x + (s[rp[i]]=='R'?0:1))
            {
               ans[rp[i]] = x+(s[rp[i]]=='R'?0:1);
               st.insert({ans[rp[i]],rp[i]});
            }
        }
    }
    cout<<ans[0]<<endl;

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
