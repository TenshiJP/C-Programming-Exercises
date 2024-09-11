#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite=0, contador=1;

    printf("\n\nHasta que desea llegar?\n Ingrese numero: ");
    scanf("%i",&limite);

    for(contador=1;contador<(limite+1);contador++ )
    {
        printf("%i  ",contador);
    }

    return 0;
}
