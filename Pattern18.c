/*
5
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    int i,j,s;
    for(i=1;i<=rows;i++){
        for( s=1; s<=rows-i;s++){
            printf(" ");
        }
        for( j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
}
