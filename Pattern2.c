/*
Enter the number of rows:5
12345
1234
123
12
1
*/
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    
    int i,j;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
            }
            printf("\n");
        }
        
}