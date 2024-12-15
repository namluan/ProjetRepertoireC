#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "repertoire.h"

// Affiche le menu
int Menu()
{
    int choix;
    do{
        printf("\nQue voulez-vous faire:\n");
        printf("(1) Ajouter une personne\n");
        printf("(2) Afficher le repertoire\n");
        printf("(3) Realiser une recherche par nom\n");
        printf("(4) Supprimer une personne par nom\n");
        printf("(5) Quitter\n");
        printf("Choix:");
        if (scanf("%d", &choix) != 1) {
            // Clear the input buffer if the user enters invalid data
            while (getchar() != '\n');
            choix = 0; // Reset choix to ensure it remains invalid
            printf("Entree invalide. Veuillez entrer un nombre entre 1 et 5.\n");
            } else if (choix < 1 || choix > 5) {
                printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
            }
    } while (choix < 1 || choix > 5);
    return choix;
}

// Crée une personne et l'ajoute au répertoire
void Creer_personne(Repertoire* repertoire)
{
    if (repertoire->nombre_personnes >= MAX_PEOPLE)
    {
        printf("\nLe repertoire est complet.\n");
        return;
    }

    // Pointeur vers la prochaine personne à ajouter
    Personne* personne = &repertoire->personnes[repertoire->nombre_personnes];

    // Vérifie la syntaxe du nom (que des lettres et/ou des tirets)
    do{
        printf("\nEntrer le nom:");
        scanf("%39s", personne->nom);
        int valide = 1;
        for (int i = 0; personne->nom[i] != '\0'; i++) {
            if (!isalpha(personne->nom[i]) && personne->nom[i] != '-') {
                valide = 0;
                break;
            }
        }
        if (!valide) {
            printf("Nom invalide. Seules les lettres et les tirets sont autorises.\n");
        } else {
            break;
        }
    } while (1);

    // Vérifie la syntaxe du nom (que des lettres et/ou des tirets)
    do{
        printf("Entrer le prenom:");
        scanf("%39s", personne->prenom);
        int valide = 1;
        for (int i = 0; personne->prenom[i] != '\0'; i++) {
            if (!isalpha(personne->prenom[i]) && personne->prenom[i] != '-') {
                valide = 0;
                break;
            }
        }
        if (!valide) {
            printf("Nom invalide. Seules les lettres et les tirets sont autorises.\n");
        } else {
            break;
        }
    } while (1);

    // Vérifie si le numero contient seuelement des chiffres
    do {
        printf("Entrer le numero de telephone (sans espace):");
        scanf("%39s", personne->numero_telephone);
        int valide = 1;
        for (int i = 0; personne->numero_telephone[i] != '\0'; i++) {
            if (!isdigit(personne->numero_telephone[i])) {
                valide = 0;
                break;
            }
        }
        if (!valide) {
            printf("Numero de telephone invalide. Seuls les chiffres sont autorises.\n");
        } else {
            break;
        }
    } while (1);

    // Vérifie la syntaxe de l'email
    do{
        printf("Entrer le mail:");
        scanf("%39s", personne->mail);
        const char* arobase = strchr(personne->mail, '@');
        if (arobase == NULL || strchr(arobase, '.') == NULL) {
            printf("Email invalide. Verifiez le format (exemple@domaine.com).\n");
        } else {
            break;
        }
    } while (1);

    repertoire->nombre_personnes++;
    printf("\nPersonne ajoutee avec succes.\n");
}

// Affiche toutes les personnes du répertoire
void Afficher_repertoire(const Repertoire* repertoire)
{
    if (repertoire->nombre_personnes == 0)
    {
        printf("\nLe repertoire est vide.\n");
    }
    else
    {
        printf("\nRepertoire:\n");
        for (int i = 0; i < repertoire->nombre_personnes; i++)
        {
            Afficher_personne(&repertoire->personnes[i]);
        }
    }
}

// Affiche les informations d'une personne
void Afficher_personne(const Personne* personne)
{
    printf("Nom: %s | Prenom: %s | Telephone: %s | Mail: %s\n",
           personne->nom, personne->prenom, personne->numero_telephone, personne->mail);
}

// Recherche une personne dans le répertoire par son nom
Personne* Rechercher_personne(Repertoire* repertoire, const char* nom)
{
    for (int i = 0; i < repertoire->nombre_personnes; i++)
    {
        if (strcmp(repertoire->personnes[i].nom, nom) == 0)
        {
            return &repertoire->personnes[i]; // Retourne un pointeur vers la personne trouvée
        }
    }
    return NULL;
}

// Supprime une personne dans le répertoire par son nom
void Supprimer_personne(Repertoire* repertoire, const char* nom)
{
    int index = -1;

    // Recherche de l'index de la personne à supprimer
    for (int i = 0; i < repertoire->nombre_personnes; i++)
    {
        if (strcmp(repertoire->personnes[i].nom, nom) == 0)
        {
            index = i;
            break;
        }
    }

    // Vérifie si la personne est trouvée
    if (index != -1)
    {
        // Décale les personnes restantes pour combler l'espace
        for (int i = index; i < repertoire->nombre_personnes - 1; i++)
        {
            repertoire->personnes[i] = repertoire->personnes[i + 1];
        }
        repertoire->nombre_personnes--; // Décrémente le compteur de personnes
        printf("\nPersonne supprimee avec succes.\n");
    }
    else
    {
        printf("\nPersonne non trouvee dans le repertoire.\n");
    }
}
