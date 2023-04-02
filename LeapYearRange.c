#include <stdio.h>
int main(){
    int year1 , year2 ;
    scanf("%d",&year1);
    scanf("%d",&year2);
    
     printf("Leap Years :\n");
    for(int i= year1 ;i<=year2;i++){
        if((i%4==0 && i%100!=0) || i%400 ==0){
            printf("%d\n",i);
        }
    }
    return 0;
}