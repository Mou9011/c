//1+2^2+3^3...n^n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,s=0;
    printf("n=");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
       {
        s=s+pow(i,i);
       }
    printf("sum=%f",s);
}
