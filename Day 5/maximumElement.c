// ###program to find the maximum element in the given array ;
#include <stdio.h>
#include <conio.h>
#include<limits.h>
int maximum(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int arr[] = {-3, -4, -6, -2, -6};
    int maxelement = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        maxelement = maximum(maxelement, arr[i]);
    }
    printf("The maximum element of the arr is %d  ", maxelement);
    return 0;
}