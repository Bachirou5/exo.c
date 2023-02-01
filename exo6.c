#include <stdio.h>
int sp, p;
int main()
{
    int sp, p;
    sp=0;

    do
    {
        printf("doner un prix \n");
        scanf("%d", &p);
        sp = sp + p;

    } while (p != 0);

    printf("la somme totale est%d \n", sp);

    return 0;
}