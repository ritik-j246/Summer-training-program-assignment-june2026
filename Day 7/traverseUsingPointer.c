// Write a program to traverse an array using pointer.....
#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr = arr; 
    int sum = 0, size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter 5 values : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
for(int i = 0 ; i< size; i++ ){
    printf("%d element of array is %d\n",i,*ptr);
    ptr++;
}
    return 0;
}