#include <stdio.h>
int main(){
    char ch;
    printf("Enter the char value: ");
    scanf("%c", &ch);

    if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
        printf("%c %s",ch, "is a vowel ");
    }
    else{
        printf("%c %s",ch, "is a constant ");
    }
}