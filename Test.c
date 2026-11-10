#include <stdio.h>

int leet(char input[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (input[i] == 'e')
        {
            input[i] = '3';
        }
    }
}

// Main Funktion
int main()
{
    char input[20];
    int len = (sizeof(input)/sizeof(char)) - 1;
    scanf("%c" ,&input);

    leet(input, len);

    for (int i = 0; i < len; i++)
    {
        printf("%c" ,input[i]);
    }

    return 0;
}