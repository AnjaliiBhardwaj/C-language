/*
5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    int i,j,num=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
             num+=1;
    }
    printf("\n");
    }  
}