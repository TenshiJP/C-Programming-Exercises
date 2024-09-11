#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite=0, contador=0;

    printf("\n\nCuantos astriscos desea ver?\nIngrese cantidad: ");
    scanf("%i",&limite);

    for(contador=1;contador<(limite+1);contador++ )
    {
        printf("%i. *\n",contador);
    }

    return 0;
}
