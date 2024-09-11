#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra, mayus;

    printf("\nIntroduzca una letra en minuscula: ",49);
    scanf("%c",&letra);
    if (letra=='a' || letra=='b' || letra=='c' || letra=='d' || letra=='e' || letra=='f' || letra=='g' || letra=='h' || letra=='i' || letra=='j' || letra=='k' || letra=='l' || letra=='m' || letra=='n' || letra=='o' || letra=='p' || letra=='q' || letra=='r' || letra=='s' || letra=='t' || letra=='u' || letra=='v' || letra=='w' || letra=='x' || letra=='y' || letra=='z' || letra=='ñ')
    {
        switch(letra)
        {
            case 'a' : mayus='A';
            break;
            case 'b' : mayus='B';
            break;
            case 'c' : mayus='C';
            break;
            case 'd' : mayus='D';
            break;
            case 'e' : mayus='E';
            break;
            case 'f' : mayus='F';
            break;
            case 'g' : mayus='G';
            break;
            case 'h' : mayus='H';
            break;
            case 'i' : mayus='I';
            break;
            case 'j' : mayus='J';
            break;
            case 'k' : mayus='K';
            break;
            case 'l' : mayus='L';
            break;
            case 'm' : mayus='M';
            break;
            case 'n' : mayus='N';
            break;
            case 'o' : mayus='O';
            break;
            case 'p' : mayus='P';
            break;
            case 'q' : mayus='Q';
            break;
            case 'r' : mayus='R';
            break;
            case 's' : mayus='S';
            break;
            case 't' : mayus='T';
            break;
            case 'u' : mayus='U';
            break;
            case 'v' : mayus='V';
            break;
            case 'w' : mayus='W';
            break;
            case 'x' : mayus='X';
            break;
            case 'y' : mayus='Y';
            break;
            case 'ñ' : mayus='Ñ';
            break;
            case 'z' : mayus='Z';
        }
            printf("\n Su letra en Mayuscula es '%c'",mayus);
    }

    else
    {
        printf("\n'%c', No es una letra minuscula",letra,49);
    }
    return 0;
}
