#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], rev[100];
    int c = 0;
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ' || str[i] == '\n')
            c++;
    for (int n = 1; n <= c; n++)
    {
        char word[100] = {};
        int count = 0, i = 0, j = 0;
        while (str[i] != '\0')
        {
            if (str[i] == ' ' || str[i] == '\n')
            {
                count++;
                if (count == n)
                {
                    word[j] = '\0';
                    break;
                }
                j = 0;
            }
            else
            {
                word[j] = str[i];
                j++;
            }
            i++;
        }
        // reverse word
        int cond = 0;
        for (int k = strlen(word) - 1; k >= 0; k--)
            printf("%c", word[k]);
        printf(" ");
    }
    return 0;
}
