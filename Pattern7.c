/*
5
A 
B A 
C B A 
D C B A 
E D C B A 
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    char chr='A';
    
    int i,j;
    for(int i=1;i<=rows;i++){
        for(int j=i;j>=1;j--){
            printf("%c ", chr + j - 1);
        }
        printf("\n");
    }
}