#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int a;
    
    scanf("%d",&a);
    
    if((a%4==0 && a%100 != 0) || ( a%400 == 0))
        {
        printf("Leap Year");
        }
    else
        {
        printf("Not a Leap Year");
        }
    
    return 0;
}
