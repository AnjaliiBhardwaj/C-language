/*
5
     1
    12
   123
  1234
 12345
 */
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int s=rows;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
    }
    printf("\n");
    }  
}