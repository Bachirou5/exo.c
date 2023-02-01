#include <stdio.h>

int s,i,n;

int main()
{
    do
    {
        printf("veuillez saisir un nombre");
        scanf("%d",&n);
    } while (n <= 0);

    s=0;
    i=1;

    while (i<n)
    {
        if (n%i==0)
        {
            s=s+i;
        }
        i=i+1;
    }

    if (s==n)
    {
        printf("%d est un nombre parfait\n", n);
    }
    else{
        printf("%d n'est pas un nombre parfait\n", n);
    }
}