 #include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena); // Prototipo de funci�n

int main(void) {
    int n;
    printf("Ingrese el n�mero de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Consumir el salto de l�nea pendiente en el b�fer

    char FRA[20][50]; // Declaraci�n del arreglo unidimensional de cadenas de caracteres

    for (int i = 0; i < n; i++) {
        printf("Ingrese la l�nea %d de texto: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
        minymay(FRA[i]);
    }

    return 0;
}

void minymay(char *cadena) {
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0') {
        if (islower(cadena[i])) {
            mi++; // Incrementar el contador de min�sculas si el car�cter es min�scula
        } else if (isupper(cadena[i])) {
            ma++; // Incrementar el contador de may�sculas si el car�cter es may�scula
        }
        i++;
    }

    printf("\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d", ma);
}
