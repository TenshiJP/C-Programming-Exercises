#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0, contador=0;
    char letra;

    printf("\n\nSi desea los numeros pares ingrese 'P' \nSi desea los numeros impares ingrse 'I'\nIngrese una letra: ");
    scanf("%c",&letra);
    printf("\nIngrese el numero con el desea comenzar: ");
    scanf("%i",&x);
    printf("\nIngrese el numero del limite: ");
    scanf("%i",&y);

    if (x<y)
    {
            if (letra==105)
            {
                for (contador=x; contador<(y+1);contador++)
                {

                    if (contador%2!=0)
                    {
                        printf("\n%i",contador);
                    }
                }
            }
            if (letra==112)
            {

                   for (contador=x;contador<(y+1);contador++)
                {

                    if (contador%2==0)
                    {
                        printf("\n%i",contador);
                    }
                }
            }
    }
    else
    {
        printf("\n\nINGRESO MAL LOS NUMEROS\n");
    }

    return 0;
}
