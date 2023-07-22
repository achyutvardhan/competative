#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define re(i,a,b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll >
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
#define mi  INT_MAX
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
   int n;
  cin >> n;
 
  string s;
  cin >> s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  int i = 0, m = 0, e = 0, o = 0, w = 0;
 
  while(i < n && s[i] == 'm' )
    ++i, ++m;
 
  while(i < n && s[i] == 'e' )
    ++i, ++e;
 
  while(i < n && s[i] == 'o' )
    ++i, ++o;
 
  while(i < n && s[i] == 'w' )
    ++i, ++w;
 
  if(i == n && m * e * o * w > 0)
    cout << "YES" << "\n";
  else
    cout << "NO" << "\n";
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

