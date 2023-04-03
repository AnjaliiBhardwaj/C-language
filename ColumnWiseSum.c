#include<stdio.h>
int main(){
    int row;
    int col;
    scanf("%d",&row);
    scanf("%d",&col);
    
    int matrix[row][col];
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d ",&matrix[i][j]);
        }
    }
    
    for(j=0;j<col;j++){
        int sum=0;
        for(i=0;i<row;i++){
            sum+=matrix[i][j];
        }
        printf("%d ",sum);
    }
}