#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int eve,odd=0;
	   for(int i=0;i<n;i++){
	       if(arr[i]%2==0){
	           eve++;
	       }else{
	           odd++;
	       }
	   }
	   int even[eve];//k
	   int oddn[odd];//j
	   int k=0,j=0;
	   for(int i=0;i<n;i++){
	       if(arr[i]%2==0){
	           even[k]=arr[i];
	           k++;
	       }else{
	           oddn[j]=arr[i];
	           j++;
	       }
	   }
	   int m=0;int p=0;int l=0;
	   for(;l<n;l++ ){
	       if(m>eve||p>odd)
	       break;
	       if(l%2==0){
	           arr[l]=even[m];
	           m++;
	       }
	       else{
	           arr[l]=oddn[p];
	           p++;
	       }
	       
	   }
	   if(m>eve){
	       while(p<odd){
	           arr[l]=oddn[p];
	           p++;
	           l++;
	       }
	   }
	   if(p>odd){
	       while(m<eve){
	           arr[l]=oddn[m];
	           m++;
	           l++;
	       }
	   }
}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

