#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int comporacion=0,mostra=0;
    char a[2],b[2],c[2],d[2],e[2],f[2],g[2],h[2],i[2],j[2];
    scanf("\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    if (a==49 /*|| b==49 || c==49 || d==49 || e==49 || f==49 || g==49 || h==49 || i==49 || j==49*/)
    {
        printf("hello");
    }



    /*char buffer[60];
    int contador=0, longitud=0;
    printf("\nIngrese su Frase: ");
    fgets(buffer,60,stdin);
    longitud=strlen(buffer);

    printf("\n**********  Su Frase Caracter por Caracter  **********\n");
    while(contador<(longitud))
    {
        printf("\n%c",buffer[contador]);
        contador++;
    }
    printf("\n***  Frase Normal  ***\n %s",buffer);*/

    return 0;
}
