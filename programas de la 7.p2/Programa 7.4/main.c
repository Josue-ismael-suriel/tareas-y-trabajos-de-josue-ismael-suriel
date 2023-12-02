#include <stdio.h>
#include <string.h>

int main(void) {
    char *cad0;
    cad0 = "Argentina"; // La declaración y asignación son correctas.
    puts(cad0);
    cad0 = "Brasil";
    // Correcto. Se modifica el contenido de la posición en memoria a la que apunta
    // la variable cad0, que es un puntero a una cadena de caracteres.
    puts(cad0);

    char cad1[50]; // Declara un array de caracteres para almacenar la entrada.
    // Ahora puedes usar gets para leer la entrada en cad1.
    gets(cad1);

    char *cad2 = "México"; // Declaración y asignación correctas.
    puts(cad2);

    // Modificar una cadena literal directamente genera un error de compilación.
    // Debes usar un array de caracteres para modificar el contenido.
    char cad3[50];
    strcpy(cad3, "Guatemala");
    // Alternativamente, puedes usar cad3 = "Guatemala"; solo en la declaración inicial.

    puts(cad3);

    return 0;
}
