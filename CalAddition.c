#include <stdio.h>
void Addition(int num, int sum){
    
    if(num!=-(num)) {
        sum+=num;
        printf("%d %s" " Sum: " ,sum);
    }

}
void main(){
    int num;
    int sum=0;
    
    printf("%d" "Enter the num");
    scanf("%d",num);
    Addition(num,sum);
}