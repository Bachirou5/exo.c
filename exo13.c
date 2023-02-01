#include <stdio.h>
#include <stdlib.h>
int main()
{
    int np, r, nnp;

    nnp = 0;
    do
    {
        printf("veuillez saisir des nombres premiers");
        scanf("%d", &np);

        r = 1;

        for (int i = 2; i < np; i++)
        {
            if (np % i == 0)
            {
                r = 0;
            }
        }

        if (r == 1)
        {
            nnp = nnp + 1;
        }
        else
        {
            printf("ce n'est pas un nombre premier\n");
        }
    } while (np != 0);

    printf("le nombre de nombre premier %d \n", nnp);

    return 0;
}
