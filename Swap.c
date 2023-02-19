/*
Intial Value of x: 5
Intial Value of y: 10
After value of x:10 
 After value of y:5
*/
#include <stdio.h>
int swapnum(int *,int *);
int main(){
    
    int x,y;
    printf("Intial Value of x: ");
    scanf("%d",&x);
    
    printf("Intial Value of y: ");
    scanf("%d",&y);
    
    swapnum(&x,&y);
    printf("After value of x: %d \nAfter value of y: %d",x,y);
    
    return 0;
    
}

int swapnum(int *p,int *q){
     int temp=0;
     temp=*p;
     *p=*q;
     *q=temp;
}
