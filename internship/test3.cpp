#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permute(string& a, int l, int r, vector<string>&final)
{
  if (l == r)
    {
      final.push_back(a);
    }
  else
    {
      for (int i = l; i <= r; i++)
    	{
    	  swap (a[l], a[i]);
    	  permute (a, l + 1, r,final);
    	  swap (a[l], a[i]);
    	}
    }
}
void printSubsequence(string input, string output, vector<string>&final)
{
    if (input.empty()) {
        permute(output,0,output.size()-1,final);
        return;
    }
    printSubsequence(input.substr(1), output + input[0],final);
    printSubsequence(input.substr(1), output,final);
}
long long findequal(vector<string> a,vector<string> b){
    long long  max = 0;
    for(int i =0;i < a.size(); i++){
        for(int j = 0;j < b.size();j++){
            if(a[i] == b[j]){
                if(a[i].size() > max){
                    max = a[i].size();
                }
            }
        }
    }
    return max;
}
  int main()
  {
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i =0;i<n;i++)
    cin>>v[i];

    long long ans = INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
      string str = v[i];
      string str1 = v[j];d
      string out;
      vector<string> final;
      vector<string> final1;
      printSubsequence(str,out,final);
      printSubsequence(str1,out,final1);
      cout<<findequal(final,final1)<<endl;
        ans = min(ans,findequal(final,final1));
    }
      }
      cout<<ans<<endl;
    return 0;
  }