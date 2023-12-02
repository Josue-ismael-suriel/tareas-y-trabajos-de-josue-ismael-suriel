#include <stdio.h>

const int max = 50;

void cuadrado(int[][max], int);
void imprime(int[][max], int);

int main(void)
{
    int CMA[max][max], TAM;
    do
    {
        printf("Ingrese el tamaño impar de la matriz: ");
        scanf("%d", &TAM);
    } while ((TAM > max || TAM < 1) && (TAM % 2));

    cuadrado(CMA, TAM);
    imprime(CMA, TAM);

    return 0;
}

void cuadrado(int A[][max], int N)
{
    int I = 1, FIL = 0, COL = N / 2, NUM = N * N;
    while (I <= NUM)
    {
        A[FIL][COL] = I;
        if (I % N != 0)
        {
            FIL = (FIL - 1 + N) % N;
            COL = (COL + 1) % N;
        }
        else
            FIL++;
        I++;
    }
}

void imprime(int A[][max], int N)
{
    int I, J;
    for (I = 0; I < N; I++)
        for (J = 0; J < N; J++)
            printf("\nElemento %d %d: %d", I + 1, J + 1, A[I][J]);
}
