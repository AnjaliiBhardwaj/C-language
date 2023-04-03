#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int profit;
        int i,j;
        int flag =1;
        int matrix[5][5];
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
               scanf("%d",&matrix[i][j]);
            }
        }
        
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(i>0 && j>0 && matrix[i][j]!=matrix[i-1][j-1]){
                    flag=0;
                    break;
                }
            }
        }
        if (flag==1){
                printf("TRUE\n");
            }
            else{
                printf("FALSE\n");
              
            }
    }
    
}