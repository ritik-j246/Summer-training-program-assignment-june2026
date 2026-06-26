#include<stdio.h>
int main(){
    int arr[5];
    int *ptr = arr;
    int sum = 0 ; 
    printf("Enter 5 values : \n");
    for(int i = 0 ; i< 5; i ++){
        scanf("%d",&arr[i]);
    }

    
    for(int i = 0 ; i< 5 ; i++ ){
        sum = sum + *ptr+i;
    }
    printf("Sum of the values is %d", sum);
    return 0 ; 
}