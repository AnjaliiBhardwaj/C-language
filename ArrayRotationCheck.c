#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int j=0;
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("%d",i+1);
            j=1;
            break;
        }
        }
    if (j!=1){
        printf("0");
    }
    }
