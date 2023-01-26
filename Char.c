#include <stdio.h>
int main(){
    char val;
    printf("Enter the char val: ");
    scanf("%c",&val);

    if((val>='a' && val<='z') || (val>='A' && val<='Z'))
    printf("%c %s", val , " is a character");

    else 
    printf("Not a char ");

}