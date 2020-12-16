#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int sucessor;
    int antecessor;

    printf ("Digite um numero inteiro ");
    scanf ("%d",&n1);

    sucessor=n1 + 1;
    antecessor=n1 - 1;

    printf ("O sucessor desse numero e: %d",sucessor);
    printf (" O antecessor desse numero e: %d",antecessor);

    return 0;
}
