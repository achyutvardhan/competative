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
    vector<vector<char>> ajM(n, vector<char>(m));
    f(i, 0, n)
            f(j, 0, m)
                cin >> ajM[i][j];

    // floor and wall
    // adjacent "." make a room
    // room

    map<pair<int,int>, bool> vis;
    ll count = 0;
    auto isSafe = [&](int x, int y){
       if(x<0||y<0)
       return false;
       else if(x>=n||y>=m)
       return false;
       else if(ajM[x][y]=='#')
       return false;

       return true;
    };

    // rooms
    function<void(int, int)> rooms = [&](int x,int y) {
       
       if(vis.find({x,y})!=vis.end()) return;
       vis[{x,y}]=true;
      // l 
       if(isSafe(x,y-1))
       rooms(x,y-1);
      //r
    if(isSafe(x,y+1))
       rooms(x,y+1);
      // u
      if(isSafe(x-1,y))
       rooms(x-1,y);
      // d
      if(isSafe(x+1,y))
       rooms(x+1,y);

    };

    f(i, 0, n)
        f(j, 0, m)
        {
            if(ajM[i][j]!='#'&&vis.find({i,j})==vis.end())
            {
                rooms(i,j);
                count++;
            }
        }

    cout<<count<<endl;
          
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
