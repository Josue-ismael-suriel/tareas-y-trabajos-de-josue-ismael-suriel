#include <stdio.h>
#include <string.h>

int main(void)
{
    char cad1[50], cad2[50], *cad0 = "";
    int i = 0;
    printf("\nIngrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\nIngrese la cadena a buscar: ");
    gets(cad2);
    char *ptr = cad1;

    while ((ptr = strstr(ptr, cad2)) != NULL)
    {
        i++;
        ptr++; // Avanzar el puntero para buscar la siguiente ocurrencia
    }
    printf("\nEl número de veces que aparece la segunda cadena es: %d", i);
    return 0;
}
