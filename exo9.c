#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, i, n;

    printf("veuillez saisir des entiers");
    scanf("%d", &N);

    if (N < 10 || N > 50)
    {
        printf("veuillez saisir un nombre correct");
        exit(1);
    }
    for (i = 0; i < N; i++)
    {
        printf("veuillez saisir des entiers");
        scanf("%d",n);

    
    }

    return 0;
}
