#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas=0, horasx=0, tasa=0;
    float impuesto=0, salario=0, bruto=0;

    printf("\n Introduzca horas trabajadas en la semana :");
    scanf("%i",&horas);
    printf("\n Introduzca la tasa :");
    scanf("%i",&tasa);

    if(horas<38)
    {
        bruto=(horas*tasa);
        printf("\n Salario: $.%f ",bruto);
    }
    else
    {
        horasx=(horas-37);
        salario=(horas*tasa);
        printf("\n Ha trabajado mas de 37 horas, tiene un amuneto del 50%");
        printf("\n Horas Extras: %i",horasx);
        bruto=(salario*0.5);
        bruto=(bruto+salario);
        printf("\n Salario: $.%f ",bruto);
    }


        if (bruto>800)
    {
        impuesto=(bruto*0.1);
        bruto=(bruto-impuesto);
        printf("\n Posee impuestos al 10 por ciento \n Suledo actual es de $. %f",bruto);
    }
    else
    {
        printf("\n Posee impuestos al 0 por ciento \n Sueldo actual es de: $. %f",bruto);
    }

    return 0;
}
