#include<stdio.h>
#include<conio.h>
int main(){
    int n ; 
    printf("Enter an integer number : ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number ",n);
    }else if (n<0){
        printf("%d is a negative number ",n);
    }else{
        printf("Enter number is 0");   
    }
    return 0;
}