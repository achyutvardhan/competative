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
    string s = to_string(n);
    ll x = 0;
    ll y = 0;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2 << endl;
    }
    else
    {
        int flag =0;
        for (ll i = 0; i < s.size(); i++)
        {
            ll digit = s[i]-'0';
            ll x1 = digit/2;
            ll y1 = (digit/2)+1;
            if (digit%2==0)
            {
                x=x*10+x1;
                y= y*10+x1;
            }else
            {
                if (flag==0)
                {
                    x=x*10+y1;
                    y= y*10+x1;
                    flag =1;
                }else
                {
                    y=y*10+y1;
                    x=x*10+x1;
                    flag=0;
                }
                
            }
            

        }
        cout<<x<<" "<<y<<endl;
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
