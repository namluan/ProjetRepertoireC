#include <iostream>

int main() {

    // Exo1
    char valex1 = 'A';
    printf("Informations sur ma variable : \n");
    printf("Type : %s\n", typeid(valex1).name());
    printf("Taille : %zu octets\n",sizeof(valex1));
    printf("Contenu : %c\n", valex1);
    printf("adresse : %p\n", (void*)&valex1);

    // Exo 2
    int valex2;
    int* ptrex2 = &valex2;
    printf("donnez un nombre entier : ");
    scanf("%d",ptrex2);
    printf("La valeur %d est stockee a l'adresse %p", *ptrex2, (void*)ptrex2);

    // Exo 3
    char prenom = 'A', nom = 'Z';
    char* p_prenom = &prenom;
    char* p_nom = &nom;
    printf("vos initiales %c. %c\n", prenom, nom);
    //inversion
    char temp = *p_prenom;
    *p_prenom = *p_nom;
    *p_nom = temp;
    printf("vos initiales %c. %c\n", prenom, nom);

    // Exo 4
    int age = 23;
    int *pointeur_age = &age;

    printf("Quel est votre age ?");
    scanf("%d", pointeur_age);

    printf("Vous avez %d ans\n", age);

    // Exo 5
    char CH[100];
    char* P = CH;
    printf("Entrez une chaine de caracteres : \n");
    scanf("%s", CH);

    while (*P != '\0') {
        P++;
    }
    printf("La longueur de la chaine est : %ld\n", P - CH);

    // Exo 6
    int tab[5];
    srand(time(NULL));
    int *ptrex6 = tab;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        tab[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        sum += *(ptrex6 + i);
    }

    printf("La somme du tableau est de : %d\n", sum);
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
    return 0;
}
