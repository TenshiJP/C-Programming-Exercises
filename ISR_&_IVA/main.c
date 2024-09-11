#include <stdio.h>
#include <stdlib.h>

float leervalor()
{
    float valor=0.0;
    printf("\nIngrese una cantidad: ");
    scanf("%f",&valor);
    return valor;
}
void IVA(float cantidad);
void ISR(float cantidad);

int main()
{
    float cantidad;

    printf("\n********** IVA & ISR ********** \n******* de una Cantidad *******\n\n");
    cantidad=leervalor();
    printf("\n****Resultado****\n\nCantidad: %.2f\n",cantidad);
    IVA(cantidad);
    ISR(cantidad);
    printf("\n***Gracias***");
    return 0;
}

void IVA(float cantidad)
{
    float ivap=0.0;
    ivap=cantidad*0.12;
    printf("\nEl IVA es de: %.2f\n",ivap);
}

void ISR(float cantidad)
{
    float isrp=0.0;
    if (cantidad>30000)
    {
        isrp=(cantidad*0.07);
    }
    else
    {
        isrp=(cantidad*0.05);
    }
    printf("\nEl ISR es de: %.2f\n",isrp);
}
