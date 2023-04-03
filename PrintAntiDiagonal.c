#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    int matrix[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j==d){
                printf("%d ",matrix[i][j]);
            }
        }
        
    }
}