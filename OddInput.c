#include <stdio.h>
int main(){
    int input;
    do{
        printf("Enter the number: ");
        scanf("%d", &input);
        printf("%d\n",input);

        if(input%2!=0){
            break;
        }
    }
    while(1);{
        printf("Odd Number Entered");
    }
}