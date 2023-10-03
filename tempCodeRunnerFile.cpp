#include <bits/stdc++.h>
#include<sstream>
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

int extract_integer_part(string text) {
  int integer_part = 0;
  for (int i = 0; i < text.length(); i++) {
    if (isdigit(text[i])) {
      integer_part *= 10;
      integer_part += text[i] - '0';
    }
  }
  return integer_part;
}


long long maxProduct(vector<long long>arr, long long n)
{
      
    // Sort the array
    sort(arr.begin(), arr.end());
    int num1, num2;
      
    // Calculate product of two smallest numbers
    int sum1 = arr[0] * arr[1];
    
    // Calculate product of two largest numbers
    int sum2 = arr[n - 1] * arr[n - 2];
    
    // Print the pairs whose product is greater
    if (sum1 > sum2) 
    {
        num1 = arr[0];
        num2 = arr[1];
    }
    else 
    {
        num1 = arr[n - 2];
        num2 = arr[n - 1];
    }
    return num1*num2;
}
  
void solve(){
    long long  n ;
    cin>>n;
    vector<string>v(n);
    for(int i =0;i<n;i++)
    cin>>v[i];
    vector<long long > num;
    for(int i =0 ;i<n;i++)
    {
       bool flag =false;
       for(int j =0;j<v[i].size();j++)
       {
           if(isdigit(v[i][j]))
           {
            flag = true;
            break;
           } 
       }
       if(flag)
       {
        long long nu = extract_integer_part(v[i]);
        num.emplace_back(nu);
       }else{
        num.emplace_back(v[i].size());
       }
    }
    
    cout<<maxProduct(num,num.size())<<endl;

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
