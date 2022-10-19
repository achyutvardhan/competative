#include <stdio.h>
int reverse(int n){

int reverse = 0, remainder;

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  return reverse;
}
int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int s[n];
        int v;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&s[i]);
        }
        scanf("%d",&v);
        int min=s[0]; int i = 0; int v1 =reverse(v);
        while (i<n)
        {
            int d= v1%10;
            if (d==0&&min>=s[i])
            {
               min = s[i]; 
                 i++;
                
            }else
            {
                i++;
            }
            
            v1=v1/10;
        }
        printf("%d\n",min);
        
    }
    
	return 0;
}

