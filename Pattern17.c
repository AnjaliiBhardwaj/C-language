/*
5
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
    for( i=rows;i>=1;i--){
        for( s=1;s<=rows-i;s++){
            printf(" ");
        }
        for( j=1;j<=i;j++){
            printf("*");
        }
        
        
        
        printf("\n");
    }
    return 0;
}
