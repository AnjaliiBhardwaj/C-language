/*
Enter the Number of Rows: 5
12345
2345
345
45
5
*/
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the Number of Rows: ");
    scanf("%d",&rows);
    int i,j;
    for (int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}