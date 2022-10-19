#include <stdio.h>


int sum(int c)
{
    int s=0;
    while (c!=0)
    {
        /* code */
    int d= c%10;
    int s = s+d;
    c=c/10;
    }
    return s;
}
int main(void) {
    
        /* code */
	int c;
    scanf("%d",&c);
    if (c<=10&& c>=1)
    {
        printf("YES\n");
    }else if (c<=1000&&sum(c)<=20)
          {
            printf("YES\n");
          }
    else{
        printf("NO\n");
    }
    
    
    
	return 0;
}

