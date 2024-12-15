#ifndef REPERTOIRE_H
#define REPERTOIRE_H

#define MAX_LENGTH 40
#define MAX_PEOPLE 40

// Structure pour une personne avec les champs nom, prénom, téléphone, et mail
typedef struct
{
    char nom[MAX_LENGTH];
    char prenom[MAX_LENGTH];
    char numero_telephone[MAX_LENGTH];
    char mail[MAX_LENGTH];
} Personne;

// Structure pour un répertoire, contenant un tableau de personnes et un compteur
typedef struct
{
    Personne personnes[MAX_PEOPLE];
    int nombre_personnes;
} Repertoire;

void creerPersonne(Repertoire* repertoire);
void afficherRepertoire(const Repertoire* repertoire);
void afficherPersonne(const Personne* personne);
Personne* rechercherPersonne(Repertoire* repertoire, const char* nom);
void supprimerPersonne(Repertoire* repertoire, const char* nom);

#endif
