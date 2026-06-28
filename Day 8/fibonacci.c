// program to print the fabonacci series using recurssive method.......

#include <stdio.h>
int fabo(int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    else
        
    return fabo(x-1)+fabo(x-2);
}
int main()
{
    int n;
    printf("Enter an integer value : ");
    scanf("%d", &n);
    if (n < 0)
        printf("The fibonacci of %d is not defined. ", n);
    else
    for(int i = 0 ; i<= n ; i++){
        printf("%d  ", fabo(i));
    }
    return 0;
}