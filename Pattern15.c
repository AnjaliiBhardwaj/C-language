/*
5
1
12
123
1234
12345
12345
1234
123
12
1*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
    }
    printf("\n");
    }
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}