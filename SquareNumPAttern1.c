/*
Enter the number of rows: 5
54321
54321
54321
54321
54321
*/

#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int i,j;
    for (int i=1;i<=rows;i++){
        for(int j=rows;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}