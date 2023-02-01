#include <stdio.h>

int n,devi,i;
int main()
{
    printf("veuillez faire une devinette: ");
    scanf("%d",&devi);

    do
    {
        printf("veuillez saisir un nombre: ");
        scanf("%d",&n);

        if (devi<n){
            printf("le nombre est plus petit\n");
        }else if (devi>n)
        {
            printf("le nombre est plus grand\n");
        }
    } while (devi!=n);
    
    printf("Bravo!\n");
}
