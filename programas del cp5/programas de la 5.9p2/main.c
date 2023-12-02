#include <stdio.h>

const int MAX = 100;

void Lectura(int A[], int T);
int Busca(int A[], int T, int K);

int main(void)
{
    int resultado, elemento, tamano, arreglo[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &tamano);
    } while (tamano > MAX || tamano < 1);

    Lectura(arreglo, tamano);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &elemento);

    resultado = Busca(arreglo, tamano, elemento);

    if (resultado)
        printf("\nEl elemento se encuentra en la posición %d", resultado);
    else
        printf("\nEl elemento no se encuentra en el arreglo");

    return 0;
}

void Lectura(int A[], int T)
{
    for (int i = 0; i < T; i++)
    {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

int Busca(int A[], int T, int K)
{
    int i = 0;
    while (i < T && A[i] != K)
    {
        i++;
    }

    if (i < T)
        return i + 1;  // Posición se cuenta desde 1
    else
        return 0;  // Elemento no encontrado
}
