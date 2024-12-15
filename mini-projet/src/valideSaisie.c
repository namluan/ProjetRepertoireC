#include <string.h>
#include <ctype.h>
#include "include/valideSaisie.h"

int validerNomOuPrenom(const char* chaine)
{
    for (int i = 0; chaine[i] != '\0'; i++)
    {
        if (!isalpha(chaine[i]))
            return 0;
    }
    return 1;
}

int validerNumero(const char* numero)
{
    int longueur = strlen(numero);
    if (longueur != NUMERO_TAILLE)
        return 0;

    for (int i = 0; i < longueur; i++)
    {
        if (!isdigit(numero[i]))
            return 0;
    }
    return 1;
}

int validerEmail(const char* email)
{
    const char* arobase = strchr(email, '@');
    return arobase && strchr(arobase, '.');
}
