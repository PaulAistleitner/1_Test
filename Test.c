#include <stdio.h>

int leet(char input[], int len)
{
    // Jedes Zeichen einzeln mit e abgleichen und wenn nötig ersetzen
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
    // Input Variable und Größe der Variable
    char input[20];
    // Eingabe
    scanf("%c" ,&input);
    int len = (sizeof(input)/sizeof(char)) - 1;    

    // leet Funktion
    leet(input, len);

    // Ausgabe
    for (int i = 0; i < len; i++)
    {
        printf("%c" ,input[i]);
    }

    return 0;
}