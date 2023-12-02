#include <stdio.h>
#include <ctype.h>

int main(void) {
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (m�ximo 50): ");
    gets(cad);

    printf("\nIngrese la posici�n en la cadena que desea verificar: ");
    scanf("%d", &n);

    if (n >= 1 && n <= strlen(cad)) { // Validar que la posici�n est� dentro del tama�o de la cadena
        p = cad[n - 1]; // Ajustar la posici�n a un �ndice v�lido (0-based)

        if (islower(p)) {
            printf("\n%c es una letra min�scula", p);
        } else {
            printf("\n%c no es una letra min�scula", p);
        }
    } else {
        printf("\nEl valor ingresado de n es incorrecto o est� fuera del rango de la cadena.");
    }

    return 0;
}
