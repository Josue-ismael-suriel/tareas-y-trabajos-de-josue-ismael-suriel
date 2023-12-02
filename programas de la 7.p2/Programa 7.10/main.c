#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c == 'S' || c == 's') { // Asegurarse de que S o s sean válidos
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin); // Evita problemas de búfer
        gets(cad);

        sum += atof(cad); // Convertir la cadena a un valor flotante y sumarlo
        i++; // Incrementar el contador de números ingresados

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        fflush(stdin); // Limpia el búfer de entrada
        c = getchar();
    }

    if (i > 0) {
        printf("\nSuma: %.2f", sum);
        printf("\nPromedio: %.2f", sum / i);
    } else {
        printf("\nNo se ingresaron números para calcular la suma y el promedio.");
    }

    return 0;
}
