#include<stdio.h>
int main(){
    int arr[5]; 
    int max ; 
    int* ptr = arr; 
    printf("Enter 5 values : \n");
    for(int i =0 ; i< 5 ; i++){
        scanf("%d",ptr+i);
    }
    max = *ptr; 
    for(int i = 1 ; i< 5; i++){
        ptr++;
       if(max < *ptr ) max = *ptr; 
       
    }
    printf("Largest element is %d ",max);
}