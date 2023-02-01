#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, M, sM, sn;

    printf("veuillez saisir un entier");
    scanf("%d", &n);

    printf("veuillez saisir un entier");
    scanf("%d", &M);

    sM = 0;
    sn = 0;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            sn = sn+ i;
        }
    }

    for (int i = 2; i < M; i++)
    {
        if (M % i == 0)
        {
            sM = sM + i;
        }
    }

    if (sn == M && sM == n)
    {
        printf("les deux nombres sont amis !");
    }
    else
    {
        printf("les deux nombres ne sont pas amis !");
    }

    return 0;
}
