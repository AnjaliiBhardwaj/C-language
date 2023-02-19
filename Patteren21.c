/*
5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    for(int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("*");
        }
        for (int j=1;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=rows-1;i>=1;i--){
        for(int s=1;s<=rows-i;s++){
            printf(" ");
        }
        for( int j=1;j<=i;j++){
            printf("*");
        }
        for( int j=1;j<=i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
}
