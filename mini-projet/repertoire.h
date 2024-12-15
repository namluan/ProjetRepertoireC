#ifndef REPERTOIRE_H
#define REPERTOIRE_H

// Constantes pour les longueurs maximales
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

// Prototypes des fonctions pour la gestion du répertoire
void Creer_personne(Repertoire* repertoire);
void Afficher_repertoire(const Repertoire* repertoire);
void Afficher_personne(const Personne* personne);
Personne* Rechercher_personne(Repertoire* repertoire, const char* nom);
void Supprimer_personne(Repertoire* repertoire, const char* nom);
int Menu();

#endif
