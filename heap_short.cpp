/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

Sergio Alejandro Perez Jimenez.
200300638.
Metodo De Ordenamiento: HeapSort

*******************************************************************************/
#include <stdio.h>

void ValMax(int Arre[], int i, int Tam)
{
    int izq,der,mayor,loc;
    
    izq= 2 * i;
    der= (2 * i + 1);
    
    if((izq<=Tam) && Arre[izq]>Arre[i])
    {
        mayor=izq;
    }
    else
    {
        mayor=i;
    }
    
    if((der<=Tam) && (Arre[der]>Arre[mayor]))
    {
        mayor=der;
    }
    
    if(mayor!=i)
    {
        loc=Arre[i];
        Arre[i]=Arre[mayor];
        Arre[mayor]=loc;
        ValMax(Arre,mayor,Tam);
    }
}

void Arbol(int Arre[], int Tam)
{
    int k;
    for(k = Tam/2; k>=1; k--)
    {
        ValMax(Arre,k,Tam);
    }
}

void HeapS(int Arre[], int Tam)
{
    Arbol(Arre,Tam);
    int i, ban;
    
    for(i=Tam; i>=2; i--)
    {
        ban=Arre[i];
        Arre[i]=Arre[1];
        Arre[1]=ban;
        ValMax(Arre,1,i - 1);
    }
}

int main()
{
    
    int Tam, i;
    printf("TAMAÑO DE LA MATRIZ:\n");
    scanf("%d", &Tam);
    
    int Arre[Tam];
    for(i=1; i<=Tam; i++)
    {
        printf("\n%d° VALOR:\n",i);
        scanf("%d",&Arre[i]);
    }
    
    printf("\nNUESTRO ARREGLO:\n");
    for(i=1; i<=Tam; i++)
    {
        printf("%d--/", Arre[i]);
    }
    printf("\n");
    
    printf("\nORDEN POR HEAPSORT:\n");
    HeapS(Arre,Tam);
    for(i = 1; i<=Tam; i++)
    {
        printf("%d--/",Arre[i]);
    }

    return 0;
}



