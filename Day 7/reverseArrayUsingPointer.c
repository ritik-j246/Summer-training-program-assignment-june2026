#include<stdio.h>
int main(){
     int arr[5];  
    int* ptr = arr; 
    printf("Enter 5 values : \n");
    for(int i =0 ; i< 5 ; i++){
        scanf("%d",ptr+i);
    }
     printf("Before reverse -> \n");
    for(int i = 0; i<5; i++){
        printf("%d",*(ptr+i));
        
        
    }
    
    printf("\nAfter reverse -> \n");
    for(int i = 4; i>=0; i--){
        printf("%d",*(ptr+i));
    }
}