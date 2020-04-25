#include<stdio.h>
#include<string.h>


// #pragma startup func1 
// #pragma exit func2

void func1(){
    printf("func1");
}

void main(){

    printf("hello \r\n");
}

void func2(){
    printf("func2");
}