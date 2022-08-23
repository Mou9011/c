//1+x+x^3...x^n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,x,n,s=1;
    printf("n=");
    scanf("%f",&n);
    printf("x=");
    scanf("%f",&x);
    for(i=1;i<=n;i=i+2)
       {
        s=s+pow(x,i);
       }
    printf("sum=%f",s);
}
