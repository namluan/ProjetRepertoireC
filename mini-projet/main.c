#include <stdio.h>
#include "repertoire.h"

int main(void)
{
    Repertoire repertoire = {.nombre_personnes = 0};
    int choix;
    char nom[MAX_LENGTH];

    while ((choix = Menu()) != 5)
    {
        switch (choix)
        {
        case 1:
            Creer_personne(&repertoire);
            break;
        case 2:
            Afficher_repertoire(&repertoire);
            break;
        case 3:
            printf("\nEntrez le nom a rechercher:\n");
            scanf("%39s", nom);
            Personne* personne = Rechercher_personne(&repertoire, nom);
            if (personne)
            {
                printf("\nPersonne trouvee:\n");
                Afficher_personne(personne);
            }
            else
            {
                printf("\nPersonne non trouvee.\n");
            }
            break;
        case 4:
            printf("\nEntrez le nom a supprimer:\n");
            scanf("%39s", nom);
            Supprimer_personne(&repertoire, nom);
            break;
        default:
            printf("\nChoix invalide. Veuillez reessayer.\n");
        }
    }

    printf("\nProgramme termine.\n");
    return 0;
}
