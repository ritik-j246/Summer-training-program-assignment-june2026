// sum of 2 matrix ..
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the size of matrix : ");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n];
    printf("Enter first matrix elements : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d%d element of array", i+1, j+1 );
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
        printf("Enter second matrix elements : \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter %d%d element of array", i+1, j+1);
                scanf("%d", &arr2[i][j]);
            }
            printf("\n");
        }
        printf("The sum of matrix first and second is : \n");

        for (int i = 0 ; i<n; i++){
            for(int j= 0 ; j<n; j++){
            printf("%d  ",arr1[i][j]+arr2[i][j]);
            }
            printf("\n");
        }

        
    
    return 0;
}