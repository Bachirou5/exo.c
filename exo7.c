#include <stdio.h>
int max,n,i,rang;
int main()
{
    for ( i = 1; i < 10; i++){
        printf("veuillez saisir dix nombres");
        scanf("%d", &n);
        if (i == 1)
        {
            max = n;
            rang = 1;
        } else
        {
            if (n>max)
            {
                max=n;
                rang = i;
            }
        }
    }

    printf("Le plus grand: %d, son rang %d\n", max, rang);
}
