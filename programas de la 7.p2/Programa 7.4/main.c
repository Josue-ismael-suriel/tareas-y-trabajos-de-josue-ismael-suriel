#include <stdio.h>
#include <string.h>

int main(void) {
    char *cad0;
    cad0 = "Argentina"; // La declaraci�n y asignaci�n son correctas.
    puts(cad0);
    cad0 = "Brasil";
    // Correcto. Se modifica el contenido de la posici�n en memoria a la que apunta
    // la variable cad0, que es un puntero a una cadena de caracteres.
    puts(cad0);

    char cad1[50]; // Declara un array de caracteres para almacenar la entrada.
    // Ahora puedes usar gets para leer la entrada en cad1.
    gets(cad1);

    char *cad2 = "M�xico"; // Declaraci�n y asignaci�n correctas.
    puts(cad2);

    // Modificar una cadena literal directamente genera un error de compilaci�n.
    // Debes usar un array de caracteres para modificar el contenido.
    char cad3[50];
    strcpy(cad3, "Guatemala");
    // Alternativamente, puedes usar cad3 = "Guatemala"; solo en la declaraci�n inicial.

    puts(cad3);

    return 0;
}
