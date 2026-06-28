#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
    int x, largest = INT_MIN, secondlargest = INT_MIN;
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
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (secondlargest < arr[i])
        {
            // if(largest != secondlargest){

            secondlargest = arr[i];
        }
    }

    printf("The second largest element in the array is %d ", secondlargest);
    return 0;
}