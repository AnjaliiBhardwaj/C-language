#include <stdio.h>
int fun1(int x){
    return x+1;
}
int fun2(int x){
    return x+2;
}
int fun3(int x){
    return x+3;
}
void fun(int (*p)(int)) {
    printf("%d\n", (*p)(10));
}
int main(){
    int (*ptr1)(int)=&fun1;
    int (*ptr2)(int)=&fun2;
    int (*ptr3)(int)=&fun3;

    /*
    int (*ptr[3])(int);
    ptr[0]= ptr1;
    ptr[1]= ptr2;
    ptr[2]= ptr3;

   
    for(int i=0;i<3;i++){
        printf("%d\n", (*ptr[i](5) ) );
    }
    */
   fun(ptr1);
    return 0;
}