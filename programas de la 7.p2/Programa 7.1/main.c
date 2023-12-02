#include <stdio.h>

int main(void) {  // Debes usar "int main" en lugar de "void main"
    char p1, p2, p3 = '$';  // Declaración de las variables tipo caracter

    printf("\nIngrese un caracter: ");  // Solicita al usuario ingresar un caracter
    printf("\n");
    fflush(stdin);  // Limpia el búfer del teclado

    /* Luego de leer un caracter siempre es conveniente escribir la función fflush
     * para limpiar el búfer, porque generalmente queda con basura y genera un error
     * en la ejecución del programa. El error se produce porque cuando se ingresa un
     * dato se oprime el "Enter" y luego cuando volvemos a leer un caracter o una
     * cadena de caracteres se toma ese "Enter" como el nuevo dato ingresado. */
    printf("\nEl caracter p3 es: ");
    putchar(p3);  // Muestra el valor de p3

    printf("\n");
    printf("\nIngrese otro caracter: ");
    fflush(stdin);  // Limpia el búfer del teclado nuevamente
    scanf(" %c", &p2);  // Debes agregar un espacio antes de %c para consumir el "Enter"

    printf("%c", p2);  // Muestra el valor de p2

    return 0;  // Devuelve 0 para indicar que el programa se ejecutó correctamente
}
