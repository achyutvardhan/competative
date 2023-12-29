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
 
 
// function without recursion
// auto fun_name = [&](int ind){};
 
 
void solve(){
    vector<char> fi(3);
    vector<char> se(3);
    vector<char> th(3);
    ll ch;
    f(i,0,3){
    cin>>fi[i];
    if(fi[i]=='?') ch = 0;
    }
    f(i,0,3){
    cin>>se[i];
    if(se[i]=='?') ch = 1;
    }
    f(i,0,3){
    cin>>th[i];
    if(th[i]=='?') ch = 2;
    
    }
    vector<int> ans(3,0);
    f(i,0,3)
    {
        if(ch==0)
        {
            if(fi[i]=='A')ans[0]=1;
            if(fi[i]=='B')ans[1]=1;
            if(fi[i]=='C')ans[2]=1;
        }
        if(ch==1)
        {
            if(se[i]=='A')ans[0]=1;
            if(se[i]=='B')ans[1]=1;
            if(se[i]=='C')ans[2]=1;
        }
        if(ch==2)
        {
            if(th[i]=='A')ans[0]=1;
            if(th[i]=='B')ans[1]=1;
            if(th[i]=='C')ans[2]=1;
        }
    }
    f(i,0,3)
    if(ans[i]==0&&i==0)cout<<'A'<<endl;
    else if(ans[i]==0&&i==1)cout<<'B'<<endl;
    else if(ans[i]==0&&i==2)cout<<'C'<<endl;
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
