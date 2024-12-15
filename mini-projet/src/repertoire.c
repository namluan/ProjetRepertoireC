#include <stdio.h>
#include <string.h>
#include "include/repertoire.h"
#include "include/valideSaisie.h"

void creerPersonne(Repertoire* repertoire)
{
    if (repertoire->nombre_personnes >= MAX_PEOPLE)
    {
        printf("\nLe repertoire est complet.\n");
        return;
    }

    Personne* personne = &repertoire->personnes[repertoire->nombre_personnes];

    do
    {
        printf("\nEntrer le nom:");
        scanf("%39s", personne->nom);
    }
    while (!validerNomOuPrenom(personne->nom) && printf("Entrer un nom seulement qu'avec des lettres.\n"));

    do
    {
        printf("Entrer le prenom:");
        scanf("%39s", personne->prenom);
    }
    while (!validerNomOuPrenom(personne->prenom) && printf("Entrer un nom seulement qu'avec des lettres.\n"));

    do
    {
        printf("Entrer le numero de telephone (sans espace et 10 nombres):");
        scanf("%39s", personne->numero_telephone);
    }
    while (!validerNumero(personne->numero_telephone) && printf("Numero invalide.\n"));

    do
    {
        printf("Entrer le mail:");
        scanf("%39s", personne->mail);
    }
    while (!validerEmail(personne->mail) && printf("Verifiez le format (exemple@domaine.com).\n"));

    repertoire->nombre_personnes++;
    printf("\nPersonne ajoutee.\n");
    afficherPersonne(personne);
}

void afficherRepertoire(const Repertoire* repertoire)
{
    if (repertoire->nombre_personnes == 0)
    {
        printf("\nLe repertoire est vide.\n");
        return;
    }

    printf("\nRepertoire:\n");
    for (int i = 0; i < repertoire->nombre_personnes; i++)
    {
        afficherPersonne(&repertoire->personnes[i]);
    }
}

void afficherPersonne(const Personne* personne)
{
    printf("Nom: %s | Prenom: %s | Telephone: %s | Mail: %s\n",
           personne->nom, personne->prenom, personne->numero_telephone, personne->mail);
}

Personne* rechercherPersonne(Repertoire* repertoire, const char* nom)
{
    for (int i = 0; i < repertoire->nombre_personnes; i++)
    {
        if (strcmp(repertoire->personnes[i].nom, nom) == 0)
            return &repertoire->personnes[i];
    }

    printf("\nPersonne non trouvee.\n");
    return NULL;
}

void supprimerPersonne(Repertoire* repertoire, const char* nom)
{
    int index = -1;
    for (int i = 0; i < repertoire->nombre_personnes; i++)
    {
        if (strcmp(repertoire->personnes[i].nom, nom) == 0)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("\nPersonne non trouvee.\n");
        return;
    }

    for (int i = index; i < repertoire->nombre_personnes - 1; i++)
    {
        repertoire->personnes[i] = repertoire->personnes[i + 1];
    }
    repertoire->nombre_personnes--;
    printf("\nPersonne supprimee.\n");
}
