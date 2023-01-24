#include <stdio.h>
void findLeap(int year){
    
    if( year%4==0){
        printf("%d %s" ,year, " is a leap year");
    }

    else{
        printf("%d %s" ,year, " is not a leap year" );
    }
}
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    findLeap( year );
}

