/*
5
*
**
***
****
*****
****
***
**
*
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    int i,j,s;
    for(i=1;i<=rows;i++){
        for( j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=rows-1;i++){
        for( j=rows-1;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    
    
}
