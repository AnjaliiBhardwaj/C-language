/*
5
    1
   232
  34543
 4567654
567898765
*/

#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    
    for (int i=1;i<=rows;i++){
        for(int s=1; s<=rows-i;s++){
            printf(" ");
        }
        
        for(int j=1; j<=i;j++){
            printf("%d",i+j-1);
            
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",i+j-1);
        }
        printf("\n");
    }
    
}