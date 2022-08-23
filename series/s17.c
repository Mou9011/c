//1+11+111+......+n

#include<stdio.h>

int main()
{
 int i,n,fact=1,sum=0,j;
    printf("n=");
    scanf("%d",&n);


       for(i=1;i<=n;i++)
       {
         j=j*10+1;
         sum=sum+j;
       }
    printf("sum=%d",sum);
}
