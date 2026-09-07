#include <stdio.h>
#include <string.h>

int main()
{
    int nOperations;
    scanf("%d", &nOperations);
    int count = 0;
    char operation[4];
    for (int i = 0; i < nOperations; i++)
    {
        scanf("%s", operation);
        if (strstr(operation, "++") != NULL)
        {
            count ++;
        }
        else if (strstr(operation, "--") != NULL)
        {
            count --;
        }
    }
    printf("%d", count);
}
