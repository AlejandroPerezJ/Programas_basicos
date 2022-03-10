/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

Programa que analiza una Tabla de verdad.
Sergio Alejandro Perez Jimenez.
200300638
*******************************************************************************/
#include <stdio.h>

int main()
{
    int DIS(int P, int Q) //Aqui se realiza la operacion de la Disyuncion
    {
        if(P==1 || Q==1)
        {
            printf("V");
        }
        else
        {
            printf("F");
        }
    }
    
    int NO_P(int P) //En esta parte se resulve el NO_P lo inverso a la P
    {
        if(!P==1)
        {
        printf("V");
        }
        else
        {
        printf("F");
        }
    }
    
    int CON(int P, int Q) //Aqui analiza la conjuncion para evaluar
    {
        if(P==1 && Q==1)
        {
            printf("V");
        }
        else
        {
            printf("F");
        }
    }
    
//Tabla con formato ordenado
printf("---------------------------------------------\n");
printf("|  P  |  Q  | P v Q |  -P   |  (P V Q) ^ ¬P |\n");
printf("---------------------------------------------\n");
printf("|  V  |  V  |   ");DIS(1,1); printf("   |   ");NO_P(1); printf("   |     ");CON(1,0); printf("         |");
printf("\n");


printf("---------------------------------------------\n");
printf("|  V  |  F  |   ");DIS(1,0); printf("   |   ");NO_P(1); printf("   |     ");CON(1,0); printf("         |");
printf("\n");
printf("---------------------------------------------\n");


printf("|  F  |  V  |   ");DIS(0,1); printf("   |   ");NO_P(0); printf("   |     ");CON(1,1); printf("         |");
printf("\n");
printf("---------------------------------------------\n");


printf("|  F  |  F  |   ");DIS(0,0); printf("   |   ");NO_P(0); printf("   |     ");CON(1,0); printf("         |");
printf("\n");
printf("---------------------------------------------\n");

    return 0;
}





