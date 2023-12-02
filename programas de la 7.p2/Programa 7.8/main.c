 #include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cadena); // Prototipo de función

int main(void) {
    int n;
    printf("Ingrese el número de filas del arreglo: ");
    scanf("%d", &n);
    getchar(); // Consumir el salto de línea pendiente en el búfer

    char FRA[20][50]; // Declaración del arreglo unidimensional de cadenas de caracteres

    for (int i = 0; i < n; i++) {
        printf("Ingrese la línea %d de texto: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
        minymay(FRA[i]);
    }

    return 0;
}

void minymay(char *cadena) {
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0') {
        if (islower(cadena[i])) {
            mi++; // Incrementar el contador de minúsculas si el carácter es minúscula
        } else if (isupper(cadena[i])) {
            ma++; // Incrementar el contador de mayúsculas si el carácter es mayúscula
        }
        i++;
    }

    printf("\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
