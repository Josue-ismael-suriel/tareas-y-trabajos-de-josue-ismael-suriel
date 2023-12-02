#include <stdio.h>
#include <stdlib.h>

/* Prototipo de la función. */
void f1(void);

/* Variable global. */
int K = 5;

int main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();

    return 0; // Se agregó la declaración de retorno.
}

void f1(void)
{
    /* Variable local. */
    int K_local = 2;
    K_local += K_local;
    printf("\n\nEl valor de la variable local es: %d", K_local);

    /* Uso de la variable global directamente. */
    K = K + K_local;
    printf("\nEl valor de la variable global es: %d", K);
}
