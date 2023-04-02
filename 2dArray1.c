/*
This C program will read a Matrix (two dimensional arrays) and print the sum of all elements of each row.
*/
#include <stdio.h>
int main(){
    int row,col;
    scanf("%d",&row);
    scanf("%d",&col);
    int sum=0;
    int product=1;

    int matrix[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum+= matrix[i][j];
        }
        printf("Sum of row %d: %d\n",i,sum);
    }
    
}