//1+x+x^2/2+x^3/3...x^n/n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,x,n,s=1;
    printf("n=");
    scanf("%f",&n);
    printf("x=");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
       {
        s=s+(pow(x,i)/i);
       }
    printf("sum=%f",s);
}
