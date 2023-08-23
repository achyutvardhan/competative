#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
#define f(i,a,b) for (ll i = a; i < b; i++)
#define r(i,a,b) for (ll i = a; i > b; i--)
#define fibo(n) (pow(1.618,n)-pow((1-1.618),n))/sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (1LL*(a/gcd(a,b))*b)
#define vsi vector<string, ll >
#define vll vector<ll>
#define mll map<ll,ll>
#define mp map<pair<ll,ll>,ll>
#define pll pair<ll,ll>
#define mi  INT_MAX
#define CeilDiv(a,b) ((a+b-1)/b)
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
    string temp;
    temp =s;
    // 3-> 1.5 floor(1.5)=1; 1; 4->2 2-1 =1; 
    if(n%2==0)
    {
        ll mid  = (n/2)-1;
        temp[mid] = s[0];
        f(i,1,n)
        {
            if(i%2!=0)
            {
                temp[mid+i]=s[i];
                mid+=i;
            }else
            {
                temp[mid-i]=s[i];
                mid-=i;
            }
        }
    }else{
        ll mid =  floor(1.0*n/2*1.0);
        temp[mid]=s[0];
        f(i,0,n)
        {
            if(i%2==0)
            {
                temp[mid+i]=s[i];
                mid+=i;
            }else
            {
                 temp[mid-i]=s[i];
                mid-=i;
            }
        }
    }
    cout<<temp<<endl;
    
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
     int t=1;
  while(t--){
     solve();
    }
}
