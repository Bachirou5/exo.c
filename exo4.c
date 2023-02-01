#include <stdio.h>

int a,b;

int main()
{
    printf("veuillez saisir deux entiers");
    scanf("%d %d", &a, &b);
    
    while (a != b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("le pgcd est: %d\n",a);
}