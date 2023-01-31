/*
1
12
123
1234*/
#include <stdio.h>
void halfPramid(int n){
    int i,j;
    for( i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

}
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    halfPramid(n);
    return 0;
}