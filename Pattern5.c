/*
5
5
54
543
5432
54321
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    int i,j;
    for (int i=rows;i>=1;i--){
        for(int j=rows;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}