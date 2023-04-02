/*C program to read a matrix and print it's diagonals*/
#include <stdio.h>
int main(){
    int row;
    int col;
    scanf("%d",&row);
    scanf("%d",&col);

    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    if (row==col){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    printf("%d\t",matrix[i][j]);
                }
                else {
                    printf("\t");
                }
                printf("\n");
            }
        }
    }
    else{
        printf("Matrix is invalid");
    }
}