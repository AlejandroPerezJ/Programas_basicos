/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Sergio Alejandro Perez Jimenez
200300638

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void Quick(int Arre[], int lim_izq, int lim_der)
{
    int izq,der,tem, piv;
    
    izq=lim_izq;
    der=lim_der;
    piv=Arre[(izq+der)/2];
    
    do
    {
        while(Arre[izq]<piv && izq<lim_der)
        {
            izq++;
        }
        
        while(piv<Arre[der] && der>lim_izq)
        {
            der--;
        }
        
        if(izq<=der)
        {
            tem=Arre[izq];
            Arre[izq]=Arre[der];
            Arre[der]=tem;
            
            izq++;
            der--;
        }
        
    }
    
    while(izq<=der);
    
    if(lim_izq<der)
    {
        Quick(Arre,lim_izq,der);
    }
    
    if(lim_der>izq)
    {
        Quick(Arre,izq,lim_der);
    }
}

void QuickSort(int Arre[], int tam)
{
    Quick(Arre,0,tam-1);
}

int main()
{
    int tam,i;
    printf("DAME EL TAMAÑO DEL ARREGLO:\n");
    scanf("%d",&tam);
    printf("\n");
    
    int Arre[tam];
    int size=sizeof(Arre)/sizeof(int);
    
    for(i=0; i<tam; i++)
    {
        printf("DAME EL %d° VALOR:\n",i+1);
        scanf("%d",&Arre[i]);
    }
    
    printf("\nEL ARREGLO ES ESTE:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d-/",Arre[i]);
    }
    printf("\n");
    
    QuickSort(Arre,tam);
    
    printf("\nORDENAMIENTO QUICKSORT:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d--/",Arre[i]);
    }
    
    return 0;
}




