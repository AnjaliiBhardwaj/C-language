#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c",&ch);
    printf("%c",ch );
    printf("\n");
    
    char str[100];
    scanf("%s",str);
    printf("%s \n",str);
    
    char sen[100];
    scanf("\n"); 
    scanf("%[^\n]%*c", sen);
    printf("%s",sen);
    
        
    return 0;
}
