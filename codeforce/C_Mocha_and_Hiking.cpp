// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define f(i, a, b) for (ll i = a; i < b; i++)
// #define r(i, a, b) for (ll i = a; i > b; i--)
// #define re(i, a, b) for (ll i = a; i >= b; i--)
// #define vsi vector<string>
// #define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
// #define Acon(n) static_cast<char>(n)
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
// #define fo(v)         \
//     for (auto &x : v) \
//         cin >> x;
// #define vll vector<ll>
// #define mll map<ll, ll>
// #define pll pair<ll, ll>
// #define mp map<pll, ll>
// #define mi INT_MAX
// #define CeilDiv(a, b) ((a + b - 1) / b)
// #define r return
// #define fix(prec)                            \
//     {                                        \
//         cout << setprecision(prec) << fixed; \
//     }
// #define mod 1000000007
// ///.........Bit_Manipulation...........///
// #define bit (1ll << 35) - 1
// #define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
// #define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
// #define SETBIT(mask) __builtin_popcountll(mask)
// #define CHECKBIT(mask, bit) (mask & (1LL << bit))
// #define ONBIT(mask, bit) (mask | (1LL << bit))
// #define OFFBIT(mask, bit) (mask & ~(1LL << bit))
// #define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

// // function without recursion
// // auto fun_name = [&](int ind){};

// void solve()
// {
//     ll n;
//     cin >> n;
//     vll v(n);
//     fo(v);
//     vector<vector<ll>> adj(n + 1);
//     f(i, 0, n)
//     {
//         if (v[i] == 0)
//             adj[i].push_back(n);
//         if (i != (n - 1))
//             adj[i].push_back(i + 1);
//         if (v[i] == 1)
//             adj[n].push_back(i);
//     }
//     // dfs
//     map<ll, bool> vis;
//     vll ans;
//     auto dfs = [&](int root)
//     {
//         stack<ll> st;
//         st.push(root);
//         while (!st.empty())
//         {
//             ll s = st.top();
//             st.pop();
//             if (vis.find(s) == vis.end())
//             {
//                 ans.push_back(s);
//                 // cout << ans.back() <<"-";
//                 // cout <<s+1<< endl;
//                 vis[s] = true;
//             }
//             for (auto &x : adj[s])
//             {
//                 if (vis.find(x) == vis.end())
//                     st.push(x);
//             }
//         }
//     };

//     f(i, 0, n + 1)
//     {
//         // cout<<i<<endl;
//         dfs(i);
//         if (ans.size() == (n + 1))
//         {
//             f(i, 0, n + 1)
//                     cout
//                 << ans[i] + 1 << " ";
//             cout << endl;
//             return;
//         }
//         else
//         {
//             ans.clear();
//             vis.clear();
//         }
//     }
//     cout << -1 << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0), cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

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
    vll v(n);
    fo(v);

    if (v[0])
    {
        cout << n + 1 << " ";
        f(i, 0, n)
                cout
            << i + 1 << " ";
        cout << endl;
    }
    else if (!v[n - 1])
    {
        f(i, 0, n)
                cout
            << i + 1 << " ";
        cout << n + 1 << " " << endl;
    }
    else
    {
        ll ind = -1;
        re(i, n - 1, 0)
        {
            if (v[i] == 0)
            {
                ind = i;
                break;
            }
        }
        f(i, 0, ind + 1)
                cout
            << i + 1 << " ";
        cout << n + 1 << " ";
        f(i, ind + 1, n)
                cout
            << i + 1 << " ";
        cout << endl;
    }
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
