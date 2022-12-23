#include <bits/stdc++.h>
using namespace std;
#define ll long long int  
 
 
void solve(){
    string s;
    cin>>s;
    string temp;
    char low ;
    int t=0;
    for (auto i = 0; i < s.size(); i+=2)
    {
        low = CHAR_MAX;
        for (auto j = i; j < s.size(); j+=2)
        {
            if (low>s[j])
            {
                low = s[j];
                t = j;
            }
        }
            // cout<<low<<endl;
        int temp = s[i];
        s[i] = low;
        s[t] = temp; 
    }
    cout<<s;

    
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
