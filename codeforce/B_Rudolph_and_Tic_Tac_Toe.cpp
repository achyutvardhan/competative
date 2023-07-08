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
    vector<vector<char>> v(3, vector<char>(3));
    f(i, 0, 3)
            f(j, 0, 3)
                cin >>
        v[i][j];
    ll count = 0;
    char ans;
   
   if(v[0][0]==v[0][1]&&v[0][1]==v[0][2]&&v[0][0]!='.')
   {
        cout<<v[0][0]<<endl;
        return;
    }
    if(v[1][0]==v[1][1]&&v[1][1]==v[1][2]&&v[1][0]!='.')
   {
        cout<<v[1][0]<<endl;
        return;
    }
    if(v[2][0]==v[2][1]&&v[2][1]==v[2][2]&&v[2][0]!='.')
   {
        cout<<v[2][0]<<endl;
        return;
    }
    if(v[0][0]==v[1][0]&&v[1][0]==v[2][0]&&v[0][0]!='.')
   {
        cout<<v[0][0]<<endl;
        return;
    }
    if(v[0][1]==v[1][1]&&v[1][1]==v[2][1]&&v[0][1]!='.')
   {
        cout<<v[0][1]<<endl;
        return;
    }
    if(v[0][2]==v[1][2]&&v[1][2]==v[2][2]&&v[0][2]!='.')
   {
        cout<<v[0][2]<<endl;
        return;
    }
    
    if(v[0][0]==v[1][1]&&v[1][1]==v[2][2]&&v[0][0]!='.')
    {
        cout<<v[0][0]<<endl;
        return;
    }
    if(v[0][2]==v[1][1]&&v[1][1]==v[2][0]&&v[0][2]!='.'){
    cout<<v[0][2]<<endl;return;}
    cout<<"DRAW"<<endl;
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
