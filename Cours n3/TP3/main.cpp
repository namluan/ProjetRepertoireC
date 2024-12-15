#include <iostream>

int main() {

    // // Exerice 1
    // int tab[5] = {1, 2, 3, 4, 5};
    //
    // // Affiche le contenue du tableau
    // for (int i = 0; i < 5; i++) {
    //     std::cout << tab[i] << std::endl;
    // }
    // for (int i = 4; i >= 0; i--) {
    //     std::cout << tab[i] << std::endl;
    // }
    //
    //
    // // Exercice 2
    // int tableau[5];
    //
    // printf("Remplir le tableau suivant : ");
    // Rempli le tableau avec ce que rentre l'utilisateur
    // for (int i = 0; i < 5; i++) {
    //     printf("tab[%d] : ", i);
    //     std::cin >> tableau[i];
    // }
    //
    // int max = tableau[0];
    // int min = tableau[0];
    // float moy;
    //
    // for (int i = 0; i < 5; i++) {
    //     if (tableau[i] > max) {
    //         max = tableau[i];
    //     }
    //     if (tableau[i] < min) {
    //         min = tableau[i];
    //     }
    //     moy += tableau[i];
    // }
    // printf("Max = %d, min = %d, moyenne = %f\n", max, min, moy/5);
    //
    // // Exercice 3
    // char tab3[1000];
    // char choix;
    // int compte = 0;
    //
    // srand(time(0));
    //
    // for (int i = 0; i < 1000; i++) {
    //     tab3[i] = 'A' + (rand() % 26);
    // }
    //
    // printf("Saisissez une lettre en majuscule : ");
    // scanf("%c", &choix);
    //
    //
    // for (int i = 0; i < 1000; i++) {
    //     if (tab3[i] == choix) {
    //         compte++;
    //     }
    // }
    // if (compte > 0) {
    //     printf("La lettre %c est présente %d fois", choix, compte);
    // } else {
    //     printf("La lettre %c n'est pas presente dans le tableau", choix);
    // }
    //
    //
    // // Exercice 4
    // int matrice[4][4] = {1, 0 , 0, 0,
    //                     0, 1, 0, 0,
    //                     0, 0, 1, 0,
    //                     0, 0, 0, 1};
    // int nb = 0;
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         printf("%d ", matrice[i][j]);
    //     }
    //     printf("\n");
    // }
    //
    //
    // // Exercice 5
    // int matrice1[3][2] = {1,3,
    //                         1,0,
    //                         1,2};
    // int matrice2[3][2] = {0,0,
    //                         7,5,
    //                         2,1};
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         matrice1[i][j] = matrice1[i][j] + matrice2[i][j];
    //         printf("%d ", matrice1[i][j]);
    //     }
    //     printf("\n");
    // }
    //
    //
    // // Exercice 6
    // char chaine[] = {'S','a','l','u','t',' ','l','e','s',' ','c','o','d','e','u','r','s','!','\0'};
    // char chaine2[5];
    // printf("%s", chaine);
    // strncpy(chaine2, chaine, 5);
    // chaine2[5] = '\0';
    // printf("\n %s", chaine2);
    //
    //
    //
    //
    // // Exercice 7
    // char date[11];
    // char nom[30];
    // char prenom[30];
    // char couleur[30];
    //
    // printf("Donnez les informations suivantes : ");
    // printf("\n    Date de naissance : ");
    // scanf("%s",&date);
    // printf("\n    Nom : ");
    // scanf("%s",&nom);
    // printf("\n    Prenom : ");
    // scanf("%s",&prenom);
    // printf("\n    Couleur des yeux : ");
    // scanf("%s",&couleur);
    // printf("Vous vous appelez %s %s, vous etes nee le %s et vos yeux sont %s", prenom, nom, date, couleur);
    //
    //
    // // Exercice 8
    // char tab8[1000];
    //
    // printf("Veuillez saisir une phrase : ");
    // gets(tab8);
    //
    // for (int i = 0; tab8[i] != '\0'; i++) {
    //     if (tab8[i] >= 'a' && tab8[i] <= 'z') {
    //         tab8[i] = tab8[i] - ('a' - 'A');
    //     }
    // }
    //
    // printf("Donne en majuscule : %s", tab8);
    //
    //
    // // Exercice 9
    // char tab9[1000];
    // char res[1000];
    // printf("Veuillez saisir une phrase : ");
    // gets(tab9);
    // printf("%s.\n", tab9);
    //
    // int len = 0;
    // while (tab9[len] != '\0') {
    //     len++;
    // }
    //
    // printf("Effet mirroir : %s | ", tab9);
    // for (int i = len-1; tab9[i] >= 0; i--) {
    //     printf("%c", tab9[i]);
    // }
    //
    //
    // // Exerice 10
    // char mdp[20];
    // char mdp2[20];
    // bool isMaj = false;
    // bool isCharspe = false;
    // bool isChiffre = false;
    // bool isLong  = false;
    // bool valide = false;
    // while (valide == false) {
    //     printf("Entrez votre nouveau mot de passe : \n");
    //     scanf("%s", mdp);
    //     for (int i = 0; i < strlen(mdp); i++) {
    //         if (mdp[i] >= 'A' && mdp[i] <= 'Z') {
    //             isMaj = true;
    //         }
    //         if (!isalnum(mdp[i])) {
    //             isCharspe = true;
    //         }
    //         if (isdigit(mdp[i])) {
    //             isChiffre = true;
    //         }
    //     }
    //     if (strlen(mdp) > 5 && strlen(mdp) < 8 ) {
    //         isLong = true;
    //     }
    //
    //     if (isMaj && isCharspe && isChiffre && isLong) {
    //         printf("Confirmez le mot de passe : ");
    //         scanf("%s", mdp2);
    //         if (strcmp(mdp2, mdp) == 0) {
    //             printf("Mot de passe changee!");
    //             valide = true;
    //             break;
    //         }
    //         printf("Mot de passe differents reesayer \n");
    //     }
    // }
    //
    // // Exercice 11
    // char str11[100];
    // printf("Entrez un message : ");
    // gets(str11);
    // printf("La taillle de la string est de %d\n", strlen(str11));
    //
    //
    // // Exercice 12
    // char str12[50];
    // char codeur[50] = "CODEUR";
    // printf("Entrez un message en majuscules : ");
    // gets(str12);
    // if (strcmp(str12, codeur) == 0) {
    //     printf("Les deux saisies sont identique");
    // }
    // else {
    //     if (strlen(str12) > strlen(codeur)) {
    //         printf("%s > %s ", str12, codeur);
    //     } else {
    //         printf("%s < %s ", str12, codeur);
    //     }
    // }

    return 0;
}
