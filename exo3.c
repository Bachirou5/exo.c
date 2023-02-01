#include<stdio.h>
int a,b,q;
int main()
{
    printf("veuillez saisir un diviseur et une dividente");
    scanf(a,b);
    q=1;
        while (a>=b);
        {
            a=a-b;
            q=q+1;
        }
        printf("le quotient est:",q);
        printf("le restant est:",a);
}