/*
Enter the number of rows: 5
12345
12345
12345
12345
12345

*/

#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    int i,j;
    for(int i=1;i<=rows;i++){
       for (int j=1;j<=rows;j++){
           printf("%d",j);
       } 
       printf("\n");
    }
    return 0;
}