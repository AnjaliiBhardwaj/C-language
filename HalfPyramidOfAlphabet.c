#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    
    int a=65;
    int val=(int)(ch);
    int rows= val -a +1;
    int i,j;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            if(i!=j){
            printf("%c ",a+i-1);
            }
            
            else{
               printf("%c",a+i-1); 
            }
        }
        printf("\n");
    }
}