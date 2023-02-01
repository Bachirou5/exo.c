#include <stdio.h>

int main()
{
    int nd,s,i;
    float moy;

    printf("ecrire un nombre de départ: ");
    scanf("%d", &nd);
    s=0;
    i=1;
     
    while (i <= nd)
    {
        s=s+i;
        i++;
    }
     moy= (float)s/ (float)nd;
     printf("la moyenne est: %f",moy);
     printf("la somme est: %d",s);
     return 0;
}
