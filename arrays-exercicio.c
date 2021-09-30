#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista1[] = {1, 3};

    int arraySize = sizeof(lista1);
    int intSize = sizeof(lista1[0]);
    int length = arraySize/intSize;
    int cont;
    for (cont=0; cont<length; cont++)
        lista1[cont] = lista1[cont]*4;
    for (cont=0; cont<length; cont++)
        printf("%d ",lista1[cont]);

    return 0;
}
