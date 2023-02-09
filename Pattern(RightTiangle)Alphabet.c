/*
Enter the number of rows: 5
A
AB
ABC
ABCD
ABCDE
*/

#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int i,j;
    char chr='A';
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%c",chr + j - 1);
        }
        printf("\n");
    }
}