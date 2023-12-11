#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define re(i,a,b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll >
#define fibo(n) (pow(1.618,n)-pow((1-1.618),n))/sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (1LL*(a/gcd(a,b))*b)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
#define mi  INT_MAX
#define CeilDiv(a,b) ((a+b-1)/b)
#define mod 1000000007
///.........Bit_Manipulation...........///
#define bit (1ll<<35)-1
#define MSB(mask) 63-__builtin_clzll(mask)  /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)  /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask,bit) (mask&(1LL<<bit))
#define ONBIT(mask,bit) (mask|(1LL<<bit))
#define OFFBIT(mask,bit) (mask&~(1LL<<bit))
#define CHANGEBIT(mask,bit) (mask^(1LL<<bit))
 
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<ll>> adj(n+1);
    map<ll,ll> m;
    f(i,1,n+1)
      f(j,0,2)
        {
            ll x;
            cin>>x;
            adj[i].push_back(x);
            m[x] = i;
        }

    ll index = -1;
    string ans;
    function <void(ll)> bfs = [&](ll st){
       queue<ll> q;
       q.push(st);
       while(!q.empty())
       {
            st= q.front();
            q.pop();
            if(adj[st][0]==0&&adj[st][1]==0)
            {
                index = st;
                break;
            }
          for(auto &x: adj[st])
          {
              q.push(x);
          }
       }
    };

    bfs(1);
    string news;
    function <void(ll)> track = [&](ll ind){
       if(m.find(ind)!=m.end())
       {
          if(adj[m[ind]][0]==ind)
          news.push_back('L');
          else if (adj[m[ind]][1]==ind)
          news.push_back('R');
          track(m[ind]);
       }
    };
    
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
     int t;
     cin>>t;
  while(t--){
     solve();
    }
}
