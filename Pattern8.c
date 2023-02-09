/*
5
E 
E D 
E D C 
E D C B 
E D C B A 
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    char chr='A';
    
    int i,j;
    for(int i=rows;i>=1;i--){
        for(int j=rows;j>=i;j--){
            printf("%c ", chr + j - 1);
        }
        printf("\n");
    }
}