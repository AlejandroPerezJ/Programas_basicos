/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tam,i,j,b;
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
    
    for(i=1; i<tam; i++)
    {
        b=arre[i];
        j=i-1;
        
        while((b<arre[j]) && (j>=0))
        {
            arre[j+1]=arre[j];
            j=j-1;
        }
        arre[j+1]=b;
    }
    printf("\nOrdenamiento de Arreglo:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d--/",arre[i]);
    }

    return 0;
}
