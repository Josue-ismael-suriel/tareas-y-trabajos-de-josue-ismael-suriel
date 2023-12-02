#include <stdio.h>
#include <ctype.h>

int main(void) {
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    gets(cad);

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);

    if (n >= 1 && n <= strlen(cad)) { // Validar que la posición esté dentro del tamaño de la cadena
        p = cad[n - 1]; // Ajustar la posición a un índice válido (0-based)

        if (islower(p)) {
            printf("\n%c es una letra minúscula", p);
        } else {
            printf("\n%c no es una letra minúscula", p);
        }
    } else {
        printf("\nEl valor ingresado de n es incorrecto o está fuera del rango de la cadena.");
    }

    return 0;
}
