#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char buffer[60];
    int contador=0, longitud=0;
    printf("\nIngrese su Frase: ");
    fgets(buffer,60,stdin);
    longitud=strlen(buffer);

    printf("\n**********  Su Frase Caracter por Caracter  **********\n");
    while(contador<(longitud+1))
    {
        printf("\n%c",buffer[contador]);
        contador++;
    }
    printf("\n***  Frase Normal  ***\n %s",buffer);

    return 0;
}
