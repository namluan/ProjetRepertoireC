#include <iostream>
#include <string>
using namespace std;

int main() {

    //Exo 1
    // int age;
    // printf("Entrez votre age: ");
    // scanf("%d", &age);
    // if (age >= 18) {
    //     printf("Vous etes donc majeur\n");
    // }
    // else {
    //     printf("Vous etes donc mineur\n");
    // }


    //Exo 2
    // int rebours;
    // printf("Entrez un nombre entier pour le compte a rebours: \n");
    // scanf("%d", &rebours);
    // for (int i = rebours; i >= 1; i--) {
    //     std::cout << i << std::endl;
    // }
    // printf("Boom !\n");


    //Exo 3
    // int nb1, nb2;
    // printf("Entrez deux nombre entier \n");
    // printf("Nombre 1 : \n");
    // scanf("%d", &nb1);
    // printf("Nombre 2 : \n");
    // scanf("%d", &nb2);
    // if (nb1 != nb2) {
    //     printf("Les 2 nombres sont differents \n");
    //     if (nb1 > nb2) {
    //         printf("Le nombre 1 est superieur au nombre 2 de %d\n", nb1-nb2);
    //     } else {
    //         printf("Le nombre 2 est superieur au nombre 1 de %d\n", nb2-nb1);
    //     }
    // } else {
    //     printf("Les 2 nombres sont egaux");
    // }


    //Exo 4
    // int jour;
    // printf("Donnez le numero d'un jour de la semaine : \n");
    // scanf("%d", &jour);
    // printf("Ce nombre correspond a : ");
    // switch (jour) {
    //     case 1: printf("Lundi"); break;
    //     case 2: printf("Mardi"); break;
    //     case 3: printf("Mercredi"); break;
    //     case 4: printf("Jeudi");  break;
    //     case 5: printf("Vendredi"); break;
    //     case 6: printf("Samedi"); break;
    //     case 7: printf("Dimanche"); break;
    //     default: printf("Le numero est invalide \n"); break;
    // }


    //Exo 5
    // int codeValide = 1234;
    // int code, tentative = 3;
    // do {
    // printf("Entrez le bon code pin : \n");
    // scanf("%d", &code);
    //     if (code == codeValide) {
    //         printf("Le telephone est deverouille\n");
    //         break;
    //     } else {
    //         tentative -= 1;
    //         printf("Erreur il vous reste %d tentatives\n", tentative);
    //     }
    //     if (tentative == 0) {
    //         printf("Vous n'avez plus de tentative");
    //         break;
    //     }
    // } while (tentative != 0);


    //Exo 6
    // int nb;
    // printf("Entrez un nombre entier : \n");
    // scanf("%d", &nb);
    // if (nb % 2 == 0) {
    //     printf("%d est un nombre pair\n", nb);
    // } else {
    //     printf("%d est un nombre impair\n", nb);
    // }


    //Exo 7
    // int nb;
    // bool prem =false;
    // printf("Entrez un nombre entier : \n");
    // scanf("%d", &nb);
    // for (int i = 2; i * i <= nb; i++) {
    //     if (nb % i == 0) {
    //         prem = true;
    //     } else {
    //         prem = false;
    //     }
    // }
    // if (prem) {
    //     printf("%d n'est pas premier", nb);
    // } else {
    //     printf("%d est premier", nb);
    // }


    //Exo 8
    // char date[11];
    // int jour, mois, annee;
    // string moisStr[] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin","Juillet",
    //     "Aout","Septembre", "Octobre", "Novembre", "Decembre"};
    //
    //
    // printf("Entrez une date : ");
    // scanf("%10s", date);
    // sscanf(date, "%2d/%2d/%4d", &jour, &mois, &annee);
    // printf("%02d %s %d\n", jour, moisStr[mois - 1].c_str(), annee);

    //Exo 9
    // int val;
    // int lim;
    // printf("Quelle table de multiplication afficher : ");
    // scanf("%d",&val);
    // printf("Jusqu'a quelle valeure voulez vous afficher cette table : ");
    // scanf("%d",&lim);
    // for (int i = 0; i < lim+1; i++) {
    //     printf("%d x %d = %d \n",val, i, val*i);
    // }

    //Exo 10
    // int nb;
    // printf("Entrez un nombre de lignes compris entre 3 et 10 : ");
    // scanf("%d",&nb);
    // for(int i=1;i<=nb;i++) {
    //     printf("\n");
    //     for (int k = 1; k <= nb-i; ++k) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2 * i - 1); ++j) {
    //         printf("*");
    //     }
    // }

    //Exo 11
    char operateur;
    int nb1, nb2, res;
    bool erreur = false;
    bool erreurdiv = false;
    printf("Entrez le 1er nombre :\n");
    cin >> nb1;
    printf("Entrez le 2nd nombre :\n");
    cin >> nb2;
    printf("Entrez l'operateur (+, -, * ou / ) :\n");
    cin >> operateur;
    switch (operateur) {
        case '+': res = nb1 + nb2; break;
        case '-': res = nb1 - nb2; break;
        case '*': res = nb1 * nb2; break;
        case '/': if(nb2 !=0 ) {
            res = nb1 / nb2;
            break;
        } else {
            printf("Impossible de diviser par 0 !\n");
            erreurdiv = true;
        }
        default: erreur = true;
    }
    if (erreur==false && erreurdiv==false) {
        printf("Le resultat de l'operation est : %d", res);
    }
    else {
        if (erreurdiv==false) {
            printf("L'operateur est invalide");
        }
    }



    return 0;
}
