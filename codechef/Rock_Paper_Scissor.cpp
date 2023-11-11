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
    string p1;
    string p2;
    cin>>p1>>p2;
    ll chef_win =0;
    ll draw =0;
    ll p2_win = 0;
    f(i,0,n)
    {
        if((p1[i]=='R'&&p2[i]=='S')||(p1[i]=='S'&&p2[i]=='P')||(p1[i]=='P'&&p2[i]=='R'))
        chef_win++;
        else if((p1[i]=='R'&&p2[i]=='R')||(p1[i]=='S'&&p2[i]=='S')||(p1[i]=='P'&&p2[i]=='P'))
        draw++;
        else 
        p2_win++;
    }
    ll play = n-draw;
    ll to_win = (play/2)+1;
    if(chef_win>=to_win)
    cout<<0<<endl;
    else
    cout<<to_win-chef_win<<endl;


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
