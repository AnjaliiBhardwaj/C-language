/*
5
1
10
101
1010
10101
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    int i,j;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i; j++){
            if(j%2!=0){
            printf("1");
            }
            else{
                printf("0");
            }
    }
    printf("\n");
    }  
}