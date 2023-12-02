#include <stdio.h>
#include <math.h>

const int MAX = 100;

void Lectura(int A[], int T);
float Media(int A[], int T);
float Varianza(int A[], int T, float M);
float Desviacion(float V);
void Frecuencia(int A[], int P, int B[]);
int Moda(int A[], int T);

void main(void)
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0}; // Declaración de variables
    float MED, VAR, DES; // Variables para la media, varianza y desviación estándar

    // Solicitar el tamaño del arreglo hasta que sea válido
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    // Leer las calificaciones
    Lectura(ALU, TAM);

    // Calcular la media, varianza, desviación estándar y frecuencia
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);

    // Mostrar resultados
    printf("\nMedia: %.2f", MED);
    printf("\nVarianza: %.2f", VAR);
    printf("\nDesviación: %.2f", DES);
    printf("\nModa: %d", MOD);
}

// Función para leer un arreglo de enteros
void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

// Función para calcular la media de un arreglo de enteros
float Media(int A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += A[I];
    return (SUM / T);
}

// Función para calcular la varianza de un arreglo de enteros
float Varianza(int A[], int T, float M)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < T; I++)
        SUM += pow(A[I] - M, 2);
    return (SUM / T);
}

// Función para calcular la desviación estándar a partir de la varianza
float Desviacion(float V)
{
    return (sqrt(V));
}

// Función para calcular la frecuencia de las calificaciones
void Frecuencia(int A[], int P, int B[])
{
    int I;
    for (I = 0; I < P; I++)
        B[A[I]]++;
}

// Función para calcular la moda a partir de las frecuencias
int Moda(int A[], int T)
{
    int I, MOD = 0, VAL = A[0];
    for (I = 1; I < T; I++)
    {
        if (A[I] > A[MOD])
        {
            MOD = I;
            VAL = A[I];
        }
    }
    return (VAL);
}
