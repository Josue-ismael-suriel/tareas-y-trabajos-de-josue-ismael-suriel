 #include <stdio.h>
#include <string.h>

int cuentap(char *);

int main(void)
{
    int i;
    char fra[50];
    printf("\nIngrese la línea de texto: ");
    gets(fra);

    // Agregar un espacio en blanco al final de la cadena
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras\n", i);

    return 0;
}

int cuentap(char *cad)
{
    int i = 0;
    char *cad0 = strchr(cad, ' '); // Buscar el primer espacio en blanco

    while (cad0 != NULL)
    {
        i++;
        cad = cad0 + 1; // Avanzar el puntero para buscar la siguiente palabra
        cad0 = strchr(cad, ' '); // Buscar el siguiente espacio en blanco
    }

    return i;
}
