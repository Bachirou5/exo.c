#include <stdio.h>

int main()
{
    int n, i, r;
    printf("veuillez saisir un nombre");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
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
        }
    }

    return 0;
}
