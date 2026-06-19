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
     printf("Before reverse \n");
      for (int i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\nAfter reverse \n");
    for (int i = n-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }
    
    return 0;
}