#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zona1, prExamen1, segExamen1, finish1, zona2, prExamen2, segExamen2, finish2, zona3, prExamen3, segExamen3, finish3, zona4, prExamen4, segExamen4, finish4;
    int sumacurso1= 0;
    int sumacurso2= 0;
    int sumacurso3= 0;
    int sumacurso4= 0;
    int promedio=0;
//Primer Curso
    printf("\n \n Ingrese Notas del Primer Curso: \n");
    printf(" Zona: ");
    scanf("%i", &zona1);
    printf(" Primer Examen: ");
    scanf("%i", &prExamen1);
    printf(" Segundo Examen: ");
    scanf("%i", &segExamen1);
    printf(" Examen Final: ");
    scanf("%i", &finish1);
    sumacurso1 = zona1+prExamen1+segExamen1+finish1;
//Segundo Curso
    printf("\n \n Ingrese Notas del Segundo Curso: \n");
    printf(" Zona: ");
    scanf("%i", &zona2);
    printf(" Primer Examen: ");
    scanf("%i", &prExamen2);
    printf(" Segundo Examen: ");
    scanf("%i", &segExamen2);
    printf(" Examen Final: ");
    scanf("%i", &finish2);
    sumacurso2 = zona2+prExamen2+segExamen2+finish2;
//Tercer Curso
    printf("\n \n Ingrese Notas del Tercer Curso: \n");
    printf(" Zona: ");
    scanf("%i", &zona3);
    printf(" Primer Examen: ");
    scanf("%i", &prExamen3);
    printf(" Segundo Examen: ");
    scanf("%i", &segExamen3);
    printf(" Examen Final: ");
    scanf("%i", &finish3);
    sumacurso3 = zona3+prExamen3+segExamen3+finish3;
//Cuarto Curso
    printf("\n \n Ingrese Notas del Cuarto Curso: \n");
    printf(" Zona: ");
    scanf("%i", &zona4);
    printf(" Primer Examen: ");
    scanf("%i", &prExamen4);
    printf(" Segundo Examen: ");
    scanf("%i", &segExamen4);
    printf(" Examen Final: ");
    scanf("%i", &finish4);
    sumacurso4 = zona4+prExamen4+segExamen4+finish4;
//Suma de los cursos
    promedio=(sumacurso1+sumacurso2+sumacurso3+sumacurso4)/4;
// Resultados
    printf("\n Nota Curso No.1: %i",sumacurso1);
    printf("\n Nota Curso No.2: %i",sumacurso2);
    printf("\n Nota Curso No.3: %i",sumacurso3);
    printf("\n Nota Curso No.4: %i",sumacurso4);
    printf("\n \n Promedio del Alumno: %i",promedio);

    return 0;
}
