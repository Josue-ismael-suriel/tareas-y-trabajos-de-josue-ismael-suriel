#include <stdio.h>
#include <string.h>

int main(void) {
    char *cad0 = "Hola México"; // Cadena de caracteres
    char cad1[20], cad2[20], cad3[20] = ", buenos días!!!"; // Arreglos de caracteres

    strcpy(cad1, cad0); // Copia cad0 a cad1
    printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3); // Copia cad3 a cad1
    printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX"); // Copia "XX" a cad1
    printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4); // Copia los primeros 4 caracteres de cad0 a cad2
    cad2[4] = '\0'; // Agrega un carácter nulo al final de cad2
    printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3); // Copia los primeros 3 caracteres de cad3 a cad2
    cad2[3] = '\0'; // Agrega un carácter nulo al final de cad2
    printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3); // Concatena cad3 al final de cad0
    printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, " YY"); // Concatena " YY" al final de cad1
    printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4); // Concatena los primeros 4 caracteres de cad0 a cad2
    printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    char *cad0_ptr = strstr(cad0, "México"); // Busca "México" en cad0
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", cad0_ptr);

    cad0_ptr = strstr(cad0, "Guatemala"); // Busca "Guatemala" en cad0
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0_ptr);

    return 0;
}
