//1+1/2+1^3+1^4...1^n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,s=0;
    printf("n=");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
       {
        s=s+(1/i);
       }
    printf("sum=%f",s);
}
