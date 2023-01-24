#include <stdio.h>
void SecondLar( int a, int b, int c){
    if( (a>b && a<c) || (a<b && a>c) ){
        printf("%d %s", a ," is the second largest num \n");
    }

    else if ((b>a && b<c) || (b<a && b>c)){
        printf("%d %s",b," is the second largest num \n");
    }
    else{
        printf("%d %s",c, " is the second largest num \n");  
    }

}
void main(){
    int a,b,c;
    printf( "Enter 1st num:\n");
    scanf("%d", &a);
    printf( "Enter 2nd num:\n");
    scanf("%d", &b);
    printf( "Enter 3rd num:\n");
    scanf("%d", &c);

    SecondLar(a,b,c);

}