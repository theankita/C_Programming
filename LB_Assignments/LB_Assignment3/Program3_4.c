#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')      // If lowercase
    {
        printf("%c", cValue - 32);           // Convert to uppercase
    }
    else if (cValue >= 'A' && cValue <= 'Z') // If uppercase
    {
        printf("%c", cValue + 32);           // Convert to lowercase
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
