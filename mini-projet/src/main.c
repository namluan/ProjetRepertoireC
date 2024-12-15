#include <stdio.h>
#include "include/repertoire.h"

int menu()
{
    int choix;
    do
    {
        printf("\nQue voulez-vous faire:\n");
        printf("(1) Ajouter une personne\n");
        printf("(2) Afficher le repertoire\n");
        printf("(3) Realiser une recherche par nom\n");
        printf("(4) Supprimer une personne par nom\n");
        printf("(5) Quitter\n");
        printf("Choix: ");
        if (scanf("%d", &choix) != 1)
        {
            while (getchar() != '\n');
            choix = 0;
        }
        if (choix < 1 || choix > 5)
        {
            printf("Veuillez entrer un nombre entre 1 et 5.\n");
        }
    }
    while (choix < 1 || choix > 5);
    return choix;
}

int main(void)
{
    Repertoire repertoire = {.nombre_personnes = 0};
    int choix;

    while ((choix = menu()) != 5)
    {
        char nom[MAX_LENGTH];

        if ((choix == 3 || choix == 4) && repertoire.nombre_personnes == 0)
        {
            printf("\nLe repertoire est vide.\n");
            continue;
        }

        switch (choix)
        {
        case 1:
            creerPersonne(&repertoire);
            break;

        case 2:
            afficherRepertoire(&repertoire);
            break;

        case 3:
            printf("\nEntrez le nom a rechercher: ");
            scanf("%39s", nom);
            const Personne* personne = rechercherPersonne(&repertoire, nom);
            if (personne)
            {
                printf("\nPersonne trouvee:\n");
                afficherPersonne(personne);
            }
            else
            {
                printf("\nPersonne non trouvee.\n");
            }
            break;

        case 4:
            printf("\nEntrez le nom a supprimer: ");
            scanf("%39s", nom);
            supprimerPersonne(&repertoire, nom);
            break;

        default:
            printf("\nChoix invalide. Veuillez reessayer.\n");
        }
    }

    printf("\nProgramme termine.\n");
    return 0;
}
