#include <stdio.h>

int main()
{
    int nProblems;
    scanf("%d", &nProblems);
    int friends[3];
    int count = 0;
    for (int i = 0; i < nProblems; i++)
    {
        for (int j = 0; j < 3; j++)
            {
                scanf("%d", &friends[j]);
            }
        if (friends[0]+friends[1]+friends[2] >= 2)
        {
            count++;
        }
        
    }
    printf("%d", count);
}    
