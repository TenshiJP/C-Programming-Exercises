#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0, resultado=0;
    char operacion, signo;

    printf("\n Ingrese el primer numero: ");
    scanf("%i",&x);
    printf("\n Ingrese el segundo numero: ");
    scanf("%i",&y);
    printf("\n Escriba el signo de la operacion que desea que se realize(+, -, *, /) : ");
    scanf("\n %c", &operacion);

    if (operacion=='+' || operacion=='-' || operacion=='*' || operacion=='/')
    {
        switch(operacion)
        {
            case '+' : resultado=x+y, signo='+';
            break;
            case '-' : resultado=x-y, signo='-';
            break;
            case '*' : resultado=x*y, signo='*';
            break;
            case '/' : resultado=x/y, signo='/';
        }
        printf("\n %i %c %i = %i",x, signo, y, resultado);
    }
    else
    {
        printf("Error ha escrito mal");
    }

    return 0;
}
