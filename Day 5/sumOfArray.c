#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter the size of array : ");
    scanf("%d", &x);
    int arr[x];
    int n = sizeof(arr) / sizeof(arr[0]), sum = 0;
    printf("Enter %d numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of all the elements of array are %d ", sum);
    return 0;
}