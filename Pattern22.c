/*
5
    *
   *-*
  *---*
 *-----*
*-------*
*/

#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    for(int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(j==1){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        for(int j=i-1;j>=1;j--){
            if(j==1){
                printf("*");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}
