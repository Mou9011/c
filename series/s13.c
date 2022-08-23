//1/1!+2^2/2+3^3/3+....n^n/n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,fact=1,sum=0;
    printf("n=");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
       {
           fact=fact*i;
           sum=sum+(pow(i,i)/i);

       }
    printf("sum=%.2f",sum);
}
