/*
Enter the NUmber of rows: 5
1
12
123
1234
12345

*/
#include <stdio.h>
int main(){
    int rows;
    printf("Enter the NUmber of rows: ");
    scanf("%d",&rows);
    int i,j;
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}