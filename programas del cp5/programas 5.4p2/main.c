#include <stdio.h>

const int MAX = 10;

void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T, const char* mensaje);
void Producto(int *X, int *Y, int *Z, int T);

int main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];

    Lectura(VE1, MAX);
    Lectura(VE2, MAX);

    Producto(VE1, VE2, VE3, MAX);

    printf("\nVectores ingresados:");
    Imprime(VE1, MAX, "Vector 1");
    Imprime(VE2, MAX, "Vector 2");

    printf("\nProducto de los Vectores:");
    Imprime(VE3, MAX, "Vector Resultante");

    return 0;
}

void Lectura(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime(int VEC[], int T, const char* mensaje)
{
    printf("\n%s:", mensaje);
    for (int I = 0; I < T; I++)
        printf("\n%s[%d]: %d", mensaje, I + 1, VEC[I]);
    printf("\n");  // Añadida esta línea para finalizar la función Imprime.
}

void Producto(int *X, int *Y, int *Z, int T)
{
    int I;
    for (I = 0; I < T; I++)
        Z[I] = X[I] * Y[I];
}
