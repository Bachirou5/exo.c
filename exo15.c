#include <stdio.h>

int main()
{
    int N, i, c, r;
    printf("veuillez saisir un nombre premier");
    scanf("%d", &N);
    c = 0;
    i = 2;
    while (c<=N)
    {
        r = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                r = 0;
            }
        }
        if (r == 1)
        {
            printf("%d ", i);
            c=c+1;
        }
        i = i + 1;
    }
    printf("\n");

    return 0;
}
