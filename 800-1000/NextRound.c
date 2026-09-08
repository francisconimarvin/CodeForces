#include <stdio.h>

int main() {
    int n, k;
    int count = 0;

    scanf("%d %d", &n, &k);
    int participantsScore[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &participantsScore[i]);
    }
    
    // Compare with the k-th member
    for (int i = 0; i < n; i++)
    {
        if (participantsScore[k-1] <=participantsScore[i] 
                && participantsScore[i] > 0)
        {
            count++;
        }
    }
    
    printf("%d", count);
}
