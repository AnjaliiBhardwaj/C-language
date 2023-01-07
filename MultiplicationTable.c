#include <stdio.h>
int main(){
    int a,i;
    printf("Enter your Num:\n");
    scanf("%d",&a);
    printf("Table of " "%d" ,a );
    printf("\n");
    for (i=1;i<=10;i++){
        printf(" %d * %d = %d \n" , a,i,a*i );
    }
    return 0;
}