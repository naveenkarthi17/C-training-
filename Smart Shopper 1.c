#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    
{
    int cost1, quantity1;
    int c2,q2;
    int c3,q3;
    int a1,b,s,r,t;
    float sum1,sum=0;
    scanf("%d%d",&cost1,&quantity1);
    scanf("%d%d",&c2,&q2);
    scanf("%d%d",&c3,&q3);
    scanf("%d",&b);
    s=cost1*quantity1;
    r=c2*q2;
    t=c3*q3;
    sum=s+r+t;
    a1=sum/10;
    sum1=sum+a1;
    printf("Total (Before Tax): %.2f\n",sum);
    printf("Total (After Tax): %.2f\n",sum1); 
    
    if(sum<=b)
        {
        printf("Within Budget");
        }
    else
        {
        printf("Over Budget");
        }
    
    return 0;
}
