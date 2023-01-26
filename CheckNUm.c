#include <stdio.h>
int main(){
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);
    
    if(num<0){
        printf("%d , %s ",num,"Number is negative");
    }
    else if(num>0){
        printf("%d , %s ",num,"Number is positive");
    }
    else{  
        printf("%d , %s ",num,"Number is zero");
    }
}