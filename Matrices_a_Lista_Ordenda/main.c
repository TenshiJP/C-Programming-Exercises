#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void LeerInforme();

int main()
{
    FILE*archivo;
    char nombre_archivo[12]="archivo.txt";
    int guardar;
    int matriz [20][20];

    printf("\n************************ MATRIZ 20x20 ************************\n\n Ingrese valores a la matriz: \n");

    archivo= fopen(nombre_archivo,"w");
    fputs("************ MATRIZ 20x20 ************\n\nIngreso la siguiente matriz: \n",archivo);
    for (int filas=0;filas<20;filas++)//Inicio Recibe Datos
    {
        fprintf(archivo,"\n");
        for (int columnas=0;columnas<20;columnas++)
        {
            printf("\nElemento [%d , %d]: ",filas,columnas);
            scanf ("%d",&matriz[filas][columnas]);
            fprintf(archivo,"  %d  ",matriz[filas][columnas]);
        }
    }//Fin Recibe Datos
    fclose(archivo);

    printf("\n\n***** Elementos de la Matriz ****** \n\n");
    for (int filas=0;filas<20;filas++)//Inicio Mostrar Datos
    {
        for (int columnas=0;columnas<5;columnas++)
        {
            printf("  %d  ",matriz[filas][columnas]);
        }
        printf("\n");
    }//Fin Mostrar Datos

    for (int i=0;i<20;i++)//Inicio algoritmo burbuja i=filas
    {
        for (int j=0;j<20;j++)//j=columnas
        {
            for (int x=0;x<20;x++)
            {
                //fprintf(archivo,"\n");
                for (int y=0;y<20;y++)
                {
                    if(matriz[i][j]>matriz[x][y])
                    {
                        guardar=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=guardar;
                    }
                }
            }
        }
    }//Fin algoritmo burbuja

    printf("\n\n***** Matriz Ordenada ****** \n\n");
    archivo=fopen(nombre_archivo,"a");
    fputs("\n\nMatriz Ordenada: \n",archivo);
    for (int filas=0;filas<20;filas++)//Inicio Mostrar Datos
    {
        for (int columnas=0;columnas<20;columnas++)
        {
            printf("  %d  ",matriz[filas][columnas]);
            fprintf(archivo,"  %d  ",matriz[filas][columnas]);
        }
        printf("\n");
        fprintf(archivo,"\n");
    }//Fin Mostrar Datos
    fclose(archivo);
    printf("\n\nSe guardo en archivo.txt lo siguiente: \n");
    LeerInforme();
    return 0;
}
//Leer Informe
void LeerInforme()
{
    FILE*fp;
    int c;
    fp=fopen("archivo.txt","r");
    while(1)
    {
        c= fgetc(fp);
        if ( feof(fp))
        {
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
}
