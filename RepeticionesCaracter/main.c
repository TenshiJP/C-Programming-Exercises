#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Declarar Variables
    char cadena[50];
    int contador=0, cantCaracteres=0;

    //Ingreso de la cadena
    printf("\n****************CONTADOR DE CARACTERES***************\n\nIngrese un texto: \n");
    fgets(cadena,45,stdin);
    printf("\nEl texto ingresado es: \n%s\n",cadena);

    //Contar cantidad de caracteres del texto
    while(contador<45)
    {
        //printf("\n%c",cadena[contador]);
        if(cadena[contador]=='\0')
        {
            //printf("Se encontro el final en %i",contador);
            cantCaracteres=(contador-1);//Guarda la cantidad de caracteres que posee el texto
            break;
        }
        contador++;
    }

    //Declaración de variables contadores de caracteres
    int contA=0, contB=0, contC=0, contD=0, contE=0, contF=0, contG=0, contH=0, contI=0, contJ=0, contK=0, contL=0, contM=0, contN=0, contO=0, contP=0, contQ=0, contR=0, contS=0, contT=0, contU=0, contV=0, contW=0, contX=0, contY=0, contZ=0, contNN=0;

    //Ciclo para contar caracteres repetidos
        for(int indice=0; indice<(cantCaracteres+1);indice++)
        {
            if(cadena[indice]==65 ||  cadena[indice]==97)//contara las A,a
                contA++;
            if(cadena[indice]==66 || cadena[indice]==98)//contara las B,b
                contB++;
            if(cadena[indice]==67 || cadena[indice]==99)//contara las C,c
                contC++;
            if(cadena[indice]==68 ||  cadena[indice]==100)//contara las D,d
                contD++;
            if(cadena[indice]==69 || cadena[indice]==101)//contara las E,e
                contE++;
            if(cadena[indice]==70 || cadena[indice]==102)//contara las F,f
                contF++;
            if(cadena[indice]==71 ||  cadena[indice]==103)//contara las G,g
                contG++;
            if(cadena[indice]==72 || cadena[indice]==104)//contara las H,h
                contH++;
            if(cadena[indice]==73 || cadena[indice]==105)//contara las I,i
                contI++;
            if(cadena[indice]==74 ||  cadena[indice]==106)//contara las J,j
                contJ++;
            if(cadena[indice]==75 || cadena[indice]==107)//contara las K,k
                contK++;
            if(cadena[indice]==76 || cadena[indice]==108)//contara las L,l
                contL++;
            if(cadena[indice]==77 ||  cadena[indice]==109)//contara las M,m
                contM++;
            if(cadena[indice]==78 || cadena[indice]==110)//contara las N,n
                contN++;
            if(cadena[indice]==79 || cadena[indice]==111)//contara las O,o
                contO++;
            if(cadena[indice]==80 ||  cadena[indice]==112)//contara las P,p
                contP++;
            if(cadena[indice]==81 || cadena[indice]==113)//contara las Q,q
                contQ++;
            if(cadena[indice]==82 || cadena[indice]==114)//contara las R,r
                contR++;
            if(cadena[indice]==83 ||  cadena[indice]==115)//contara las S,s
                contS++;
            if(cadena[indice]==84 || cadena[indice]==116)//contara las T,t
                contT++;
            if(cadena[indice]==85 || cadena[indice]==117)//contara las U,u
                contU++;
            if(cadena[indice]==86 ||  cadena[indice]==118)//contara las V,v
                contV++;
            if(cadena[indice]==87 || cadena[indice]==119)//contara las W,w
                contW++;
            if(cadena[indice]==88 || cadena[indice]==120)//contara las X,x
                contX++;
            if(cadena[indice]==89 ||  cadena[indice]==121)//contara las Y,y
                contY++;
            if(cadena[indice]==90 || cadena[indice]==122)//contara las Z,z
                contZ++;
            if(cadena[indice]==164 || cadena[indice]==165)//contara las Ñ,ñ
                contNN++;
        }
        //Prueba de que se cuente los caracteres
        //printf("\nA: %i\nB: %i\nC: %i\nD: %i\nE: %i\nF: %i\nG: %i\nH: %i\nI: %i\nJ: %i\nK: %i\nL: %i\nM: %i\nN: %i\nO: %i\nP: %i\nQ: %i\nR: %i\nS: %i\nT: %i\nU: %i\nV: %i\nW: %i\nX: %i\nY: %i\nZ: %i\nÑ: %i\n",contA,contB,contC,contD,contE,contF,contG,contH,contI,contJ,contK,contL,contM,contN,contO,contP,contQ,contR,contS,contT,contU,contV,contW,contX,contY,contZ,contNN);

//Codicionales para calcular caracter más repetido
    //Condicional para saber si A,a es el caracter más repetido
    if(contA>contB && contA>contC && contA>contD && contA>contE && contA>contF && contA>contG && contA>contH && contA>contI && contA>contJ && contA>contK && contA>contL && contA>contM && contA>contN && contA>contNN && contA>contO && contA>contP && contA>contQ && contA>contR && contA>contS && contA>contT && contA>contU && contA>contV && contA>contW && contA>contX && contA>contY && contA>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n A %i veces.\n\n",contA);
    }

    //Condicional para saber si B,b es el caracter más repetido
    if(contB>contA && contB>contC && contB>contD && contB>contE && contB>contF && contB>contG && contB>contH && contB>contI && contB>contJ && contB>contK && contB>contL && contB>contM && contB>contN && contB>contNN && contB>contO && contB>contP && contB>contQ && contB>contR && contB>contS && contB>contT && contB>contU && contB>contV && contB>contW && contB>contX && contB>contY && contB>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n B %i veces.\n\n",contB);
    }

    //Condicional para saber si C,c es el caracter más repetido
    if(contC>contA && contC>contB && contC>contD && contC>contE && contC>contF && contC>contG && contC>contH && contC>contI && contC>contJ && contC>contK && contC>contL && contC>contM && contC>contN && contC>contNN && contC>contO && contC>contP && contC>contQ && contC>contR && contC>contS && contC>contT && contC>contU && contC>contV && contC>contW && contC>contX && contC>contY && contC>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n C %i veces.\n\n",contC);
    }

    //Condicional para saber si D,d es el caracter más repetido
    if(contD>contA && contD>contB && contD>contC && contD>contE && contD>contF && contD>contG && contD>contH && contD>contI && contD>contJ && contD>contK && contD>contL && contD>contM && contD>contN && contD>contNN && contD>contO && contD>contP && contD>contQ && contD>contR && contD>contS && contD>contT && contD>contU && contD>contV && contD>contW && contD>contX && contD>contY && contD>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n D %i veces.\n\n",contD);
    }

    //Condicional para saber si E,e es el caracter más repetido
    if(contE>contA && contE>contB && contE>contC && contE>contD && contE>contF && contE>contG && contE>contH && contE>contI && contE>contJ && contE>contK && contE>contL && contE>contM && contE>contN && contE>contNN && contE>contO && contE>contP && contE>contQ && contE>contR && contE>contS && contE>contT && contE>contU && contE>contV && contE>contW && contE>contX && contE>contY && contE>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n E %i veces.\n\n",contE);
    }

    //Condicional para saber si F,f es el caracter más repetido
    if(contF>contA && contF>contB && contF>contC && contF>contD && contF>contE && contF>contG && contF>contH && contF>contI && contF>contJ && contF>contK && contF>contL && contF>contM && contF>contN && contF>contNN && contF>contO && contF>contP && contF>contQ && contF>contR && contF>contS && contF>contT && contF>contU && contF>contV && contF>contW && contF>contX && contF>contY && contF>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n F %i veces.\n\n",contF);
    }

    //Condicional para saber si G,g es el caracter más repetido
    if(contG>contA && contG>contB && contG>contC && contG>contD && contG>contE && contG>contF && contG>contH && contG>contI && contG>contJ && contG>contK && contG>contL && contG>contM && contG>contN && contG>contNN && contG>contO && contG>contP && contG>contQ && contG>contR && contG>contS && contG>contT && contG>contU && contG>contV && contG>contW && contG>contX && contG>contY && contG>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n G %i veces.\n\n",contG);
    }

    //Condicional para saber si H,h es el caracter más repetido
    if(contH>contA && contH>contB && contH>contC && contH>contD && contH>contE && contH>contF && contH>contG && contH>contI && contH>contJ && contH>contK && contH>contL && contH>contM && contH>contN && contH>contNN && contH>contO && contH>contP && contH>contQ && contH>contR && contH>contS && contH>contT && contH>contU && contH>contV && contH>contW && contH>contX && contH>contY && contH>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n H %i veces.\n\n",contH);
    }

    //Condicional para saber si I,i es el caracter más repetido
    if(contI>contA && contI>contB && contI>contC && contI>contD && contI>contE && contI>contF && contI>contG && contI>contH && contI>contJ && contI>contK && contI>contL && contI>contM && contI>contN && contI>contNN && contI>contO && contI>contP && contI>contQ && contI>contR && contI>contS && contI>contT && contI>contU && contI>contV && contI>contW && contI>contX && contI>contY && contI>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n I %i veces.\n\n",contI);
    }

    //Condicional para saber si J,j es el caracter más repetido
    if(contJ>contA && contJ>contB && contJ>contC && contJ>contD && contJ>contE && contJ>contF && contJ>contG && contJ>contH && contJ>contI && contJ>contK && contJ>contL && contJ>contM && contJ>contN && contJ>contNN && contJ>contO && contJ>contP && contJ>contQ && contJ>contR && contJ>contS && contJ>contT && contJ>contU && contJ>contV && contJ>contW && contJ>contX && contJ>contY && contJ>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n J %i veces.\n\n",contJ);
    }

    //Condicional para saber si K,k es el caracter más repetido
    if(contK>contA && contK>contB && contK>contC && contK>contD && contK>contE && contK>contF && contK>contG && contK>contH && contK>contI && contK>contJ && contK>contL && contK>contM && contK>contN && contK>contNN && contK>contO && contK>contP && contK>contQ && contK>contR && contK>contS && contK>contT && contK>contU && contK>contV && contK>contW && contK>contX && contK>contY && contK>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n K %i veces.\n\n",contK);
    }

    //Condicional para saber si L,L es el caracter más repetido
    if(contL>contA && contL>contB && contL>contC && contL>contD && contL>contE && contL>contF && contL>contG && contL>contH && contL>contI && contL>contJ && contL>contK && contL>contM && contL>contN && contL>contNN && contL>contO && contL>contP && contL>contQ && contL>contR && contL>contS && contL>contT && contL>contU && contL>contV && contL>contW && contL>contX && contL>contY && contL>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n L %i veces.\n\n",contL);
    }

    //Condicional para saber si M,m es el caracter más repetido
    if(contM>contA && contM>contB && contM>contC && contM>contD && contM>contE && contM>contF && contM>contG && contM>contH && contM>contI && contM>contJ && contM>contL && contM>contK && contM>contN && contM>contNN && contM>contO && contM>contP && contM>contQ && contM>contR && contM>contS && contM>contT && contM>contU && contM>contV && contM>contW && contM>contX && contM>contY && contM>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n M %i veces.\n\n",contM);
    }

    //Condicional para saber si N,n es el caracter más repetido
    if(contN>contA && contN>contB && contN>contC && contN>contD && contN>contE && contN>contF && contN>contG && contN>contH && contN>contI && contN>contJ && contN>contL && contN>contK && contN>contM && contN>contNN && contN>contO && contN>contP && contN>contQ && contN>contR && contN>contS && contN>contT && contN>contU && contN>contV && contN>contW && contN>contX && contN>contY && contN>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n N %i veces.\n\n",contN);
    }

    //Condicional para saber si Ñ,ñ es el caracter más repetido
    if(contNN>contA && contNN>contB && contNN>contC && contNN>contD && contNN>contE && contNN>contF && contNN>contG && contNN>contH && contNN>contI && contNN>contJ && contNN>contL && contNN>contK && contNN>contM && contNN>contN && contNN>contO && contNN>contP && contNN>contQ && contNN>contR && contNN>contS && contNN>contT && contNN>contU && contNN>contV && contNN>contW && contNN>contX && contNN>contY && contNN>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n Ñ %i veces.\n\n",contNN);
    }

    //Condicional para saber si O,o es el caracter más repetido
    if(contO>contA && contO>contB && contO>contC && contO>contD && contO>contE && contO>contF && contO>contG && contO>contH && contO>contI && contO>contJ && contO>contL && contO>contK && contO>contM && contO>contNN && contO>contN && contO>contP && contO>contQ && contO>contR && contO>contS && contO>contT && contO>contU && contO>contV && contO>contW && contO>contX && contO>contY && contO>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n O %i veces.\n\n",contO);
    }

    //Condicional para saber si P,p es el caracter más repetido
    if(contP>contA && contP>contB && contP>contC && contP>contD && contP>contE && contP>contF && contP>contG && contP>contH && contP>contI && contP>contJ && contP>contL && contP>contK && contP>contM && contP>contNN && contP>contN && contP>contO && contP>contQ && contP>contR && contP>contS && contP>contT && contP>contU && contP>contV && contP>contW && contP>contX && contP>contY && contP>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n P %i veces.\n\n",contP);
    }

    //Condicional para saber si Q,q es el caracter más repetido
    if(contQ>contA && contQ>contB && contQ>contC && contQ>contD && contQ>contE && contQ>contF && contQ>contG && contQ>contH && contQ>contI && contQ>contJ && contQ>contL && contQ>contK && contQ>contM && contQ>contNN && contQ>contN && contQ>contO && contQ>contP && contQ>contR && contQ>contS && contQ>contT && contQ>contU && contQ>contV && contQ>contW && contQ>contX && contQ>contY && contQ>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n Q %i veces.\n\n",contQ);
    }

    //Condicional para saber si R,r es el caracter más repetido
    if(contR>contA && contR>contB && contR>contC && contR>contD && contR>contE && contR>contF && contR>contG && contR>contH && contR>contI && contR>contJ && contR>contL && contR>contK && contR>contM && contR>contNN && contR>contN && contR>contO && contR>contP && contR>contQ && contR>contS && contR>contT && contR>contU && contR>contV && contR>contW && contR>contX && contR>contY && contR>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n R %i veces.\n\n",contR);
    }

    //Condicional para saber si S,s es el caracter más repetido
    if(contS>contA && contS>contB && contS>contC && contS>contD && contS>contE && contS>contF && contS>contG && contS>contH && contS>contI && contS>contJ && contS>contL && contS>contK && contS>contM && contS>contNN && contS>contN && contS>contO && contS>contP && contS>contQ && contS>contR && contS>contT && contS>contU && contS>contV && contS>contW && contS>contX && contS>contY && contS>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n S %i veces.\n\n",contS);
    }

    //Condicional para saber si T,t es el caracter más repetido
    if(contT>contA && contT>contB && contT>contC && contT>contD && contT>contE && contT>contF && contT>contG && contT>contH && contT>contI && contT>contJ && contT>contL && contT>contK && contT>contM && contT>contNN && contT>contN && contT>contO && contT>contP && contT>contQ && contT>contR && contT>contS && contT>contU && contT>contV && contT>contW && contT>contX && contT>contY && contT>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n T %i veces.\n\n",contT);
    }

    //Condicional para saber si U,u es el caracter más repetido
    if(contU>contA && contU>contB && contU>contC && contU>contD && contU>contE && contU>contF && contU>contG && contU>contH && contU>contI && contU>contJ && contU>contL && contU>contK && contU>contM && contU>contNN && contU>contN && contU>contO && contU>contP && contU>contQ && contU>contR && contU>contS && contU>contT && contU>contV && contU>contW && contU>contX && contU>contY && contU>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n U %i veces.\n\n",contU);
    }

    //Condicional para saber si V,v es el caracter más repetido
    if(contV>contA && contV>contB && contV>contC && contV>contD && contV>contE && contV>contF && contV>contG && contV>contH && contV>contI && contV>contJ && contV>contL && contV>contK && contV>contM && contV>contNN && contV>contN && contV>contO && contV>contP && contV>contQ && contV>contR && contV>contS && contV>contT && contV>contU && contV>contW && contV>contX && contV>contY && contV>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n V %i veces.\n\n",contV);
    }

    //Condicional para saber si W,w es el caracter más repetido
    if(contW>contA && contW>contB && contW>contC && contW>contD && contW>contE && contW>contF && contW>contG && contW>contH && contW>contI && contW>contJ && contW>contL && contW>contK && contW>contM && contW>contNN && contW>contN && contW>contO && contW>contP && contW>contQ && contW>contR && contW>contS && contW>contT && contW>contU && contW>contV && contW>contX && contW>contY && contW>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n W %i veces.\n\n",contW);
    }

    //Condicional para saber si X,x es el caracter más repetido
    if(contX>contA && contX>contB && contX>contC && contX>contD && contX>contE && contX>contF && contX>contG && contX>contH && contX>contI && contX>contJ && contX>contL && contX>contK && contX>contM && contX>contNN && contX>contN && contX>contO && contX>contP && contX>contQ && contX>contR && contX>contS && contX>contT && contX>contU && contX>contV && contX>contW && contX>contY && contX>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n X %i veces.\n\n",contX);
    }

    //Condicional para saber si Y,y es el caracter más repetido
    if(contY>contA && contY>contB && contY>contC && contY>contD && contY>contE && contY>contF && contY>contG && contY>contH && contY>contI && contY>contJ && contY>contL && contY>contK && contY>contM && contY>contNN && contY>contN && contY>contO && contY>contP && contY>contQ && contY>contR && contY>contS && contY>contT && contY>contU && contY>contV && contY>contW && contY>contX && contY>contZ)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n Y %i veces.\n\n",contY);
    }

    //Condicional para saber si Z,z es el caracter más repetido
    if(contZ>contA && contZ>contB && contZ>contC && contZ>contD && contZ>contE && contZ>contF && contZ>contG && contZ>contH && contZ>contI && contZ>contJ && contZ>contL && contZ>contK && contZ>contM && contZ>contNN && contZ>contN && contZ>contO && contZ>contP && contZ>contQ && contZ>contR && contZ>contS && contZ>contT && contZ>contU && contZ>contV && contZ>contW && contZ>contX && contZ>contY)
    {
        printf("\n*****RESULTADO*****\nEl caracter con mas repetciones es:\n Z %i veces.\n\n",contZ);
    }

//Condicionales para ver caracteres menos repetidos
    printf("\n*****RESULTADO*****");
    if(contA==1)//Condicional para saber si A,a es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n A %i ves.\n",contA);
    }

    if(contB==1)//Condicional para saber si B,b es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n B %i ves.\n",contB);
    }

    if(contC==1)//Condicional para saber si C,c es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n C %i ves.\n",contC);
    }

    if(contD==1)//Condicional para saber si D,d es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n D %i ves.\n",contD);
    }

    if(contE==1)//Condicional para saber si E,e es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n E %i ves.\n",contE);
    }

    if(contF==1)//Condicional para saber si F,f es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n F %i ves.\n",contF);
    }

    if(contG==1)//Condicional para saber si G,g es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n G %i ves.\n",contG);
    }

    if(contH==1)//Condicional para saber si H,h es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n H %i ves.\n",contH);
    }

    if(contI==1)//Condicional para saber si I,i es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n I %i ves.\n",contI);
    }

    if(contJ==1)//Condicional para saber si J,j es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n J %i ves.\n",contJ);
    }

    if(contK==1)//Condicional para saber si K,k es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n K %i ves.\n",contK);
    }

    if(contL==1)//Condicional para saber si L,l es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n L %i ves.\n",contL);
    }

    if(contM==1)//Condicional para saber si M,m es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n M %i ves.\n",contM);
    }

    if(contN==1)//Condicional para saber si N,n es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n N %i ves.\n",contN);
    }

    if(contNN==1)//Condicional para saber si Ñ,ñ es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n Ñ %i ves.\n",contNN);
    }

    if(contO==1)//Condicional para saber si O,o es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n O %i ves.\n",contO);
    }

    if(contP==1)//Condicional para saber si P,p es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n P %i ves.\n",contP);
    }

    if(contQ==1)//Condicional para saber si Q,q es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n Q %i ves.\n",contQ);
    }

    if(contR==1)//Condicional para saber si R,r es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n R %i ves.\n",contR);
    }

    if(contS==1)//Condicional para saber si S,s es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n S %i ves.\n",contS);
    }

    if(contT==1)//Condicional para saber si T,t es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n T %i ves.\n",contT);
    }

    if(contU==1)//Condicional para saber si U,u es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n U %i ves.\n",contU);
    }

    if(contV==1)//Condicional para saber si V,v es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n V %i ves.\n",contV);
    }

    if(contW==1)//Condicional para saber si W,w es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n W %i ves.\n",contW);
    }

    if(contX==1)//Condicional para saber si X,x es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n X %i ves.\n",contX);
    }

    if(contY==1)//Condicional para saber si Y,y es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n Y %i ves.\n",contY);
    }

    if(contZ==1)//Condicional para saber si Z,z es el caracter menos repetido
    {
        printf("\nEl caracter con menos repetciones es:\n Z %i ves.\n",contZ);
    }

    return 0;
}
