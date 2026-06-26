// program to count the number of vowels in your name .....
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];

    printf("Enter your first name : ");
    fgets(name, sizeof(name), stdin);
    printf("Before reverse -> \n");
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    int st = 0, end = strlen(name) - 1;

    while (st < end)
    {
        char temp = name[st];
        name[st] = name[end];
        name[end] = temp;
        st++;
        end--;
    }
    printf("\nAfter reverse ->\n");
    for (int i = 0; i < strlen(name); i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}