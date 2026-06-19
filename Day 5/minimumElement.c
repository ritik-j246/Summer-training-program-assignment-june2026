// ###program to find the maximum element in the given array ;
#include <stdio.h>
#include <conio.h>
#include<limits.h>
int minimum(int x, int y)
{
 return (x < y) ? x : y;
}
int main()
{
    int arr[] = {3, 34, 6, 42, 5};
    int minelement = INT_MAX;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        minelement = minimum(minelement, arr[i]);
    }
    printf("The minimum element of the arr is %d  ", minelement);
    return 0;
}