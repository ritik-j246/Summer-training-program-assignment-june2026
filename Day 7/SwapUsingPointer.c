#include<stdio.h>
void swap(int* a , int* b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x ,y ; 
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    printf("\nBefor swapping -> ");
    printf("x = %d and y = %d",x,y);
    swap( &x , &y );
printf("\nAfter swapping -> ");
    printf("x = %d and y = %d",x,y);
    return 0 ; 
}