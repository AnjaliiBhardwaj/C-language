#include <stdio.h>
int main(){
    int start;
    int end;
    printf("Enter the start number:");
    scanf("%d",&start);
    printf("Enter the end number:");
    scanf("%d",&end);

    for (int i=start;i<=end;i++){
        if(i%2!=0){
            printf("%d \n",i);
        }
    }
    return 0;
}