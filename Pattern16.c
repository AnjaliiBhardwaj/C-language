/*
5
    *
   **
  ***
 ****
*****
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    int s;
    for(int i=1;i<=rows;i++){
        for( s=1;s<=rows-i;s++){
            printf(" ");
        }
        for(int j=s;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}