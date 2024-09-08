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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    int x1, y1;
    int x2, y2;
    f(i, 0, n)
        f(j, 0, m)
    {
        cin >> grid[i][j];
        if (grid[i][j] == 'A')
        {
            x1 = i;
            y1 = j;
        }
        if (grid[i][j] == 'B')
        {
            x2 = i;
            y2 = j;
        }
    }
    int min_path = INT_MAX;
    int count = 0;
    bool flag = false;
    string s = "";
    string ans = "";
    auto isSafe = [&](int x, int y)
    {
        if (x < 0 || y < 0)
            return false;
        else if (x >= n || y >= m)
            return false;
        else if (grid[x][y] == '#')
            return false;

        return true;
    };
    function<void(int, int)> path = [&](int x, int y)
    {
        if (x == x2 && y == y2)
        {
            min_path = min(min_path, count++);
            flag = true;
            if (ans.size() > s.size() || ans.size() == 0)
                ans = s;
            return;
        }
        if (grid[x][y] == '#')
            return;

        // l
        if (isSafe(x, y - 1))
        {
            grid[x][y] = '#';
            count++;
            s.push_back('L');
            path(x, y - 1);
            s.pop_back();
            count--;
            if (x == x1 && y == y1)
                grid[x][y] = 'A';
            else
                grid[x][y] = '.';
        }
        // r
        if (isSafe(x, y + 1))
        {
            grid[x][y] = '#';
            count++;
            s.push_back('R');
            path(x, y + 1);
            s.pop_back();
            count--;
            if (x == x1 && y == y1)
                grid[x][y] = 'A';
            else
                grid[x][y] = '.';
        }
        // u
        if (isSafe(x - 1, y))
        {
            grid[x][y] = '#';
            count++;
            s.push_back('U');
            path(x - 1, y);
            s.pop_back();
            count--;
            if (x == x1 && y == y1)
                grid[x][y] = 'A';
            else
                grid[x][y] = '.';
        }
        // d
        if (isSafe(x + 1, y))
        {
            grid[x][y] = '#';
            count++;
            s.push_back('D');
            path(x + 1, y);
            s.pop_back();
            count--;
            if (x == x1 && y == y1)
                grid[x][y] = 'A';
            else
                grid[x][y] = '.';
        }
    };

    path(x1, y1);
    if (flag)
    {
        cout << "YES" << endl;
        cout << min_path << endl;
        cout << ans << endl;
    }
    else
        cout << "NO" << endl;
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
