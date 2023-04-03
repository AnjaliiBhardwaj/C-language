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
    
    for(i=0;i<row;i++){
        int flag=0;
        for(j=0;j<col;j++){
        if(matrix[i][j]==0){
            flag=1;
            break;
        }
        }
        
        if(flag==1){
            for(j=0;j<col;j++){
                matrix[i][j]=0;
            }
        }
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}