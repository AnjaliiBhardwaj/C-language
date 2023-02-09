/*
5
54321
4321
321
21
1
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    int i,j;
    for(int i=rows;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}