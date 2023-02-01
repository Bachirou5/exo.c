#include <stdio.h>

int main()
{
    int hf, i, j,r, ne,ht, nc;
    char c;
    printf("veuillez saisir un symbole");
    scanf("%c", &c);
    printf("veuillez saisir la hauteur des feuilles");
    scanf("%d", &hf);
    printf("veuillez saisir la hauteur du tronc");
    scanf("%d", &ht);
    printf("veuillez saisir largeur racine");
    scanf("%d", &r);
    ne = hf - 1;
    nc = 1;

    for (i = 1; i <= hf; i++)
    {
        for (j = 1; j <= ne; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nc; k++)
        {
            printf("%c", c);
        }
        printf("\n");
        ne = ne - 1;
        nc = nc +2;
    }
    
    
    for (int l= 1; l <= ht; l++)
    {
        for (int k=1; k<= hf-1; k++)
        {
            printf(" ");
        }
        printf("%c\n",c);
    }
    ne= (hf-1)-(r/2);

    for (int m = 1; m<=ne; m++)
    {
        printf(" ");
    }
    for ( i = 1; i <= r; i++)
    {
       printf("%c\n",c);
    }
    
    
    
    

    return 0;
}
