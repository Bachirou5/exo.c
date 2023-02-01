#include <stdio.h>
#include <stdlib.h>
int a, b, c, d;
int main()
{
    printf("veuillez saisir deux entiers");
    scanf("%d%d", &a, &b);
    c = a;
    d = b;
    while (a != b)
    {
        if (a > b)
        {
            b = b + d;
        }
        else
        {
            if (a < b)
            {
                a = a + c;
            }
        }
    }
    printf("le ppmc est :%d", a);
}