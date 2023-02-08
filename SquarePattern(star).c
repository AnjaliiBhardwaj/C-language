#include<stdio.h>
int main(){
    int rows;
    printf("Enter the Number of rows: ");
    scanf("%d",&rows);

    int i,j;
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }
}