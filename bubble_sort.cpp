/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

Sergio Alejandro Perez Jimenez
200300638
Ordenamiento De Burbuja
*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam,i,j,aux;
    printf("Dame el tamaño del arreglo:\n");
    scanf("%d",&tam);
    
    int arre[tam];
    
    for(i=0; i<tam; i++)
    {
        printf("Dame el %d° valor:\n",i+1);
        scanf("%d", &arre[i]);
    }
    
    printf("\nEl arreglo es este:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d-/",arre[i]);
    }
    printf("\n");

for (i=0; i<tam; i++)
{
    for(j=i+1; j<tam; j++)
    {
        if(arre[j]<arre[i])
        {
            aux=arre[i];
            arre[i]=arre[j];
            arre[j]=aux;
        }
    }
}

printf("\nOrdenamiento de Arreglo Burbuja:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d--/",arre[i]);
    }
    return 0;
}



