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
    if (s[0] == s[s.length() - 1])
    {
        cout << "NO" << endl;
        return;
    }
    map<char, int> m;
    m[s[0]] = 1;
    m[s[s.length() - 1]] = 0;
    char ch;
    stack<char> s1;
    f(i, 0, s.length())
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = 1;
            ch = s[i];
            // cout<<s[i]<<endl;
        }

        if (m[s[i]] == 1){
            s1.push(s[i]);}
        else if(m[s[i]]==0){
            s1.pop();}
        // cout<<m['B']<<endl;
    }
    // cout<<s1.size()<<endl;
    if (s1.empty())
    {
        cout << "YES" << endl;
        return;
    }
    stack<char> s2;
    m[ch] = 0;
    f(i, 0, s.length())
    {
        if (m[s[i]] == 1)
            s2.push(s[i]);
        else if (m[s[i]] == 0)
            s2.pop();
    }
    if (s2.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
