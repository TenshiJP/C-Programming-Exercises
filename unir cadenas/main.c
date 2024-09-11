#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[60], apellido1[20], apellido2[20],prueba;
    int contador=0;

    while (contador=1)
    {
        printf( "\nEscribe tu nombre: " );
        scanf("%s",&nombre);
        printf( "\nEscribe tu primer apellido: " );
        scanf("%s",&apellido1);
        printf( "\nEscribe tu segundo apellido: " );
        scanf("%s",&apellido2);
        strcat(nombre," ");
        strcat(nombre,apellido1);
        strcat(nombre," ");
        strcat(nombre,apellido2);
        printf( "\n*******DATOS*******\n\nNombre: %s.\n", nombre);
        printf("\nSi desea salir ingrese la letra S\nSi desea cotinuar ingrese cualquier letra :");
        scanf("\n%c",&prueba);
        if(prueba==83 || prueba==115)
        {
            printf("\nGracias...\n");
            break;
        }
        else
        {
            printf("\nContinuando...\n");
            contador++;
        }

    }

    return 0;
}
