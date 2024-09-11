#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=0, num3=0, prue1=0, prue2=0, contador=0;

    printf("*#*#*#*#* INGRESE TRES NUMEROS CONSECUTIVOS *#*#*#*#*");

    for (contador=1;contador=-1;contador++)
    {
        printf("\nIngrese primer numero: ");
        scanf("%i",&num1);
        printf("Ingrese segundo numero: ");
        scanf("%i",&num2);
        printf("Ingrese tercer numero: ");
        scanf("%i",&num3);

        prue1=(num1+1);
        prue2=(num2+1);

        if (num2==prue1 && num3==prue2)
        {
            printf("\nSon consecutivos: %i, %i, %i",num1,num2,num3);
            printf("\nGracias por ingresar los tres numeros consecutivos\n");
            return 0;
        }
        else
        {
            printf("\nError los numeros no son consecutivos ingrese de nuevo los numeros\n\n");
        }
    }

    return 0;
}
