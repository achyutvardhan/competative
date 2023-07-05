#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
#define mp map<pll,ll>
///.........Bit_Manipulation...........///
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
    vector<pair<int, string>> v((2*n)-2);
    for (int i =0; i < ((2*n)-2); i++)
    {
        string s;
        cin>>s;
        int size = s.length();
        v[i].first = size;
        v[i].second = s;
    }
    sort(v.begin(),v.end());
    string s1 = v[v.size()-1].second;
    string s2 = v[v.size()-2].second;
    reverse(s2.begin(),s2.end());
    if(s1==s2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


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
