// program to print address of a variable......
#include<stdio.h>
int main(){
    int n=5 ;
    int* ptr = &n;
    printf("Address of n is %d",ptr);
    printf("Address of n is %d",&n);
    return 0;
}