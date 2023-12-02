 #include <stdio.h>
#include <string.h>

// Declaraci�n de la estructura alumno
typedef struct {
    int matricula;
    char nombre[30];
    float cal[5];
} alumno;

// Prototipos de funciones
void Lectura(alumno A[], int T);
void F1(alumno A[], int T);
void F2(alumno A[], int T);
void F3(alumno A[], int T);

int main(void) {
    alumno ARRE[50]; // Declaraci�n de un arreglo de estructuras alumno
    int TAM;

    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > 50 || TAM < 1); // Verifica que el tama�o del arreglo sea correcto

    Lectura(ARRE, TAM); // Llama a la funci�n para leer los datos de los alumnos
    F1(ARRE, TAM);      // Llama a la funci�n para calcular el promedio de calificaciones
    F2(ARRE, TAM);      // Llama a la funci�n para buscar alumnos con calificaci�n en la tercera materia > 9
    F3(ARRE, TAM);      // Llama a la funci�n para calcular el promedio general de la materia 4

    return 0;
}

void Lectura(alumno A[], int T) {
    int I, J;

    for (I = 0; I < T; I++) {
        printf("\nIngrese los datos del alumno %d\n", I + 1);
        printf("Ingrese la matr�cula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno: ");
        gets(A[I].nombre);

        for (J = 0; J < 5; J++) {
            printf("Ingrese la calificaci�n %d del alumno %d: ", J + 1, I + 1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}

void F1(alumno A[], int T) {
    int I, J;
    float SUM, PRO;

    for (I = 0; I < T; I++) {
        printf("\nMatr�cula del alumno: %d", A[I].matricula);
        SUM = 0.0;

        for (J = 0; J < 5; J++) {
            SUM += A[I].cal[J];
        }

        PRO = SUM / 5;
        printf("\tPromedio: %.2f", PRO);
    }
}

void F2(alumno A[], int T) {
    int I;

    printf("\nAlumnos con calificaci�n en la tercera materia > 9");
    for (I = 0; I < T; I++) {
        if (A[I].cal[2] > 9) {
            printf("\nMatr�cula del alumno: %d", A[I].matricula);
        }
    }
}

void F3(alumno A[], int T) {
    int I;
    float PRO, SUM = 0.0;

    for (I = 0; I < T; I++) {
        SUM += A[I].cal[3];
    }

    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f\n", PRO);
}
