// 10^2= 100
#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int power= pow(a,b);
    printf("%d", power);
    return 0;
}