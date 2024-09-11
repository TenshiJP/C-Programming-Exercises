#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, horas, minutos, total = 0;

    printf("\n Ingrese una cantidad de días");
    printf("\n Dias: ");
    scanf("%i",&dias);
    printf("\n Ingrese una cantidad de horas");
    printf("\n Horas: ");
    scanf("%i",&horas);
    printf("\n Ingrese una cantidad de minutos");
    printf("\n Minutos: ");
    scanf("%i",&minutos);
    dias=dias*86400;
    horas=horas*3600;
    minutos=minutos*60;
    total=dias+minutos+horas;
    printf("\n\n Hay un total de: %i",total);
    printf(" segundos.");

    return 0;
}
