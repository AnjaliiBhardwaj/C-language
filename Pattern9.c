/*
5
*****
*   *
*   *
*   *
*****
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    int i,j;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(i==1||i==rows||j==1||j==rows)
            printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}