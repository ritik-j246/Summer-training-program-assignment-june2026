#include <stdio.h>
#include <conio.h>
void swap(int* a , int* b){
    int temp = *a;
    *a = *b ; 
    *b = temp ; 

}
int main()
{
    int x, y;
    printf("Enter the integer value of x : ");
    scanf("%d", &x);
    printf("Enter the integer value of y : ");
    scanf("%d", &y);
    printf("Before Swapping the value of x ans y are %d , %d \n",x,y);
    swap(&x , &y);
     printf("After Swapping the value of x ans y are %d , %d ",x,y);
    
    return 0;
}