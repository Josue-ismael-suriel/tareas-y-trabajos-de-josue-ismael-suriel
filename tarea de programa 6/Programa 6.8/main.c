#include <stdio.h>

const int max = 50;

void lectura(int[][max], int, int);
void transpuesta(int[][max], int[][max], int, int);
void imprime(int[][max], int, int);

int main(void)
{
    int MAT[max][max], TRA[max][max];
    int FIL, COL;
    do
    {
        printf("Ingrese el número de filas de la matriz: ");
        scanf("%d", &FIL);
    } while (FIL > max || FIL < 1);

    do
    {
        printf("Ingrese el número de columnas de la matriz: ");
        scanf("%d", &COL);
    } while (COL > max || COL < 1);

    lectura(MAT, FIL, COL);
    transpuesta(MAT, TRA, FIL, COL);
    imprime(TRA, COL, FIL);

    return 0;
}

void lectura(int A[][max], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);
            scanf("%d", &A[I][J]);
        }
}

void transpuesta(int M1[][max], int M2[][max], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            M2[J][I] = M1[I][J];
}

void imprime(int A[][max], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
        for (J = 0; J < C; J++)
            printf("\nElemento %d %d: %d ", I + 1, J + 1, A[I][J]);
}
