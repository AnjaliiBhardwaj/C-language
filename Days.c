#include <stdio.h>
void display(int ndays){
    
    int years=0;
    int weeks=0;
    int days=0;
    years=ndays/365;
    weeks=(ndays%365)/7;
    days=(ndays%365)%7;
    printf("\n%d years \n%d weeks \n%d days", years,weeks,days);

}

void main(){
    int days;
    printf("\n Enter num of days :");
    scanf("%d",&days);
    fflush(stdin);
    display(days);
}