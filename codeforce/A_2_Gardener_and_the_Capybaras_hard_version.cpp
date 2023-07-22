#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
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
    string s;
    cin >> s;
    ll n = s.length();
    if(s[0]==s[n-1])
    {
        cout<<s[0]<<" ";
        f(i,1,n-1)
        cout<<s[i];
        cout<<" "<<s[n-1]<<endl;
        return;
    }
    if(s[0]==s[1])
    {
        cout<<s[0]<<" "<<s[1]<<" ";
        f(i,2,n)
        cout<<s[i];
    }
    else if(s[0]=='a')
    {
        cout<<s[0]<<" ";
        f(i,1,n-1)
        cout<<s[i];
        cout<<" "<<s[n-1];
    }else{
        cout<<s[0]<<" "<<s[1]<<" ";
        f(i,2,n)
        cout<<s[i];

    }
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
