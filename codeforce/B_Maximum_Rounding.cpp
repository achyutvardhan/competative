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
    string s;
    cin >> s;
    ll index = -1;
    f(i, 0, s.length())
    {
        if ((s[i] - '0') >= 5)
        {
            index = i;
            s[i]='0';
            break;
        }
    }
    if (index == -1)
    {
        cout << s<<endl;
        return;
    }
    else if(index ==0)
    {
        cout<<1;
        f(i,0,s.length())cout<<'0';
        cout<<endl;
        return;
    }
    ll rem = 1;
    f(i,index+1,s.length())s[i]='0';
    r(i, index-1, -1)
    {
        // 20445
        ll digit = s[i]-'0';
        // cout<<digit+rem<<" ";
        if((digit+rem)>=5)
        {
            s[i]='0';
            rem=1;
        }else
        {
            s[i]+=rem;
            rem=0;
        }
    }
    if(rem==1)cout<<'1';
    cout<<s<<endl;
    // cout<<endl;
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
