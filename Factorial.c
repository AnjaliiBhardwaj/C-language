#include <stdio.h>
int main(){
    int n;
    int fact=1;
    printf("Enter the num:");
    scanf("%d",&n);
    for (int i=n;i>1;i--){
        printf("%d * ",i);
        fact=fact*i;
    }
     printf("1 =");
     printf("%d",fact);

    return 0;
}