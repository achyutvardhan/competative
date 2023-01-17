#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if (sqrt((x1*x1)+(y1*y1))>sqrt((x2*x2)+(y2*y2)))
    {
        cout<<"ALEX"<<endl;
    }else if (sqrt((x1*x1)+(y1*y1))< sqrt((x2*x2)+(y2*y2)))
    {
                cout<<"BOB"<<endl;
    }
    else
        cout<<"EQUAL"<<endl;
    
    
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
