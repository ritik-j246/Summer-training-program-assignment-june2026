#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap a year ", year);
    }
    else
    {
        printf("%d is not a leap a year ", year);
    }
    return 0;
}