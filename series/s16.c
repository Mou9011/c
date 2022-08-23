//1-2+3-4+5-6......+n

#include<stdio.h>

int main()
{
 int i,n,fact=1,sum=0;
    printf("n=");
    scanf("%d",&n);


       for(i=1;i<=n;i++)
       {
         if(i%2==0)
            sum-=i;
            else
            sum+=i;
       }
    printf("sum=%d",sum);
}
