#include <stdio.h>
#include <stdbool.h>
void fun1(int a[]){
    // Sorting of Array
}
void fun2(int * a, int * b){
    // Swap
     
}
void fun3(int a[]){
    // Reverse an array
}
bool fun4(int x){
    // String is pallidrome
}
void fun5(int y){
   // Reverse a string
}
void fun6(void (*p)(int)) {
   // call switch fxn perform like a fxn switch case
}
int main(){
    void (*ptr1)(int[])=&fun1;
    void (*ptr2)(void)=&fun2;
    void (*ptr3)(void)=&fun3;
    bool (*ptr4)(int)=&fun4;
    void (*ptr5)(int)=&fun5;
    fun6(ptr1);
    return 0;
}