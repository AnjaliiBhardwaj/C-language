#include <stdio.h>
void sumN(n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);


}
int main(){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    sumN(n);
}