/*
5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1
 */
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    
    
    for (int i=0;i<rows;i++){
        for(int s=1; s<=rows-i;s++){
            printf(" ");
        }
        int n=1;
        for(int j=0; j<=i;j++){
            printf("%d ",n);
            n=n*(i-j)/(j+1);
        }
        printf("\n");
    }
    
}