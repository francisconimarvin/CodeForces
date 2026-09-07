#include <stdio.h>
#include <string.h>

int main()
{   
    int numberOfWords;
    scanf("%d", &numberOfWords);
    // Problem said string size is between 1-100
    for (int i = 0; i < numberOfWords; i++)
    {
        char word[101];
        scanf("%s", word);
        if (strlen(word) > 10) 
        {
            printf("%c%d%c\n",
                    word[0],
                    strlen(word)-2,
                    word[strlen(word)-1]
                    );
        } else
        {
            printf("%s\n", word);
        }
    }
}
