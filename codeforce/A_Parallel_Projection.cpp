#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    int w,d ,h,a,b,f,g;
    cin>>w>>d>>h;
    cin>>a>>b>>f>>g;
    int first = h+abs(f-a)+ b +g;
    int second  = h+a+f+abs(b-g);
    int third = h+(d-b)+(d-g)+abs(f-a);
    int fourth = h+(w-a)+(w-f)+abs(b-g);
    int result = min(first,min(second,min(third,fourth)));
    cout<<result<<endl;
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
