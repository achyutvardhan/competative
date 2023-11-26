#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vsi vector<string, ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define mp map<pair<ll, ll>, ll>
#define pll pair<ll, ll>
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

void dijkstra(vector<vector<pair<int, int>>> &adj)
{
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> ans(adj.size(), INT_MAX);
    ans[0] = 0;
    pq.push(make_pair(0, 0));
    while (!pq.empty())
    {
        int node = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        for (auto &x : adj[node])
        {
            if (d + x.second < ans[x.first])
            {
                ans[x.first] = d + x.second;
                pq.push(make_pair(ans[x.first], x.first));
            }
        }
    }
    f(i, 0, adj.size())
            cout
        << i << "-->" << ans[i] << endl;
}

void solve()
{
    vector<vector<pair<int, int>>> adj(6);
    // first node , second weight
    adj[0].push_back(make_pair(1, 4));
    adj[0].push_back(make_pair(2, 4));
    adj[1].push_back(make_pair(0, 4));
    adj[1].push_back(make_pair(2, 2));
    adj[2].push_back(make_pair(0, 4));
    adj[2].push_back(make_pair(1, 2));
    adj[2].push_back(make_pair(3, 3));
    adj[2].push_back(make_pair(5, 6));
    adj[2].push_back(make_pair(4, 1));
    adj[3].push_back(make_pair(2, 3));
    adj[3].push_back(make_pair(5, 2));
    adj[5].push_back(make_pair(3, 2));
    adj[5].push_back(make_pair(4, 3));
    adj[5].push_back(make_pair(2, 6));
    adj[4].push_back(make_pair(2, 1));
    adj[4].push_back(make_pair(5, 3));

    dijkstra(adj);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
