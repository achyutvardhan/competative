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
int sum(vll &v)
{
    ll sum = 0;
    f(i, 0, v.size())
        sum += v[i];
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    ll c1 = 0;
    ll c = 0;
    f(i, 0, n)
    {
        cin >> v[i];
        (v[i] == 1) ? c1++ : c++;
    }
    if (c == 0&&c1>=2)
    {
        v[0]=-1;
        v[1]=-1;
        cout<<sum(v)<<endl;
        return;
    }else if(c1==0&&c>=2)
    {
        v[0]=1;
        v[1]=1;
        cout<<sum(v)<<endl;
        return;
    }else if(c1>0&&c==1)
    {
        cout<<sum(v)<<endl;
        return;
    }else{
        ll con =-1;
        f(i,0,n-1)
        {
          if(v[i]==-1&&v[i+1]==-1)
          {
            con =i;
            break;
          }
        }
        if(con>-1)
        {
            v[con]=1;
            v[con+1]=1;
            cout<<sum(v)<<endl;
        }else{
            cout<<sum(v)<<endl;
        }
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
