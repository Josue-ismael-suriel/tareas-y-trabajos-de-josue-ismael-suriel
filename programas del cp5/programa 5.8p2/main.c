#include <stdio.h>

const int TAM = 100;

void Imprime(int[], int);
void Primo(int, int *);

int main(void)
{
    int P[TAM];  // No inicializamos aquí

    P[0] = 2;  // Inicializamos el primer elemento directamente
    int FLA, J = 1, PRI = 3;

    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);

        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }

    Imprime(P, TAM);

    return 0;
}

void Primo(int A, int *B)
{
    int DI = 3;
    while (*B && (DI * DI <= A))
    {
        if ((A % DI) == 0)
            *B = 0;
        DI += 2;
    }
}

void Imprime(int Primos[], int T)
{
    for (int I = 0; I < T; I++)
        printf("\nPrimos[%d]: %d", I, Primos[I]);
}

