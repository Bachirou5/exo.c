#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, r;
    printf("veuillez saisir un nombre ");
    scanf("%d", &n);

    r = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            r = 0;
        }
    }

    if (r == 1)
    {
        printf("c'est un nombre premier\n");
    }
    else
    {
        printf("ce n'est pas un nombre premier\n");
    }

    return 0;
}
