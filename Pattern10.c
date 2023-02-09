/*
6
*
**
* *
*  *
*   *
******

*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    int i,j;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if(i==rows||j==1||i==j)
            printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}