#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int dominoSize = 2;

    // Integer is very important, as there's no such thing as half domino.

    int howManyDominos = (M * N) / dominoSize;
    printf("%d", howManyDominos);
}
