#include <iostream>
#include <cmath>

int main() {
    //exo1
    // double montant;
    // std::cout << "Entrez un montant en Euro: " << std::endl;
    // scanf("%lf", &montant);
    // montant = montant*1.11;
    // printf("le taux de change est de 1.11 dollars\n");
    // printf("montant en Dollars = %lf\n", montant);


    //exo2
    // int var1 = 123;
    // int var2 = 18;
    // int var3;
    // printf("var1 = %d et var2 = %d\n", var1, var2);
    // var3 = var1;
    // var1 = var2;
    // var2 = var3;
    // printf("var1 = %d et var2 = %d\n", var1, var2);


    //exo3
    // int var1 = 0;
    // int var2 = 0;
    // int var3 = 0;
    // std::cout << "Entrez un 3 entiers separes par des espaces: " << std::endl;
    // scanf("%d %d %d", &var1, &var2, &var3);
    // int res = var1 + var2 + var3;
    // double moy = res / 3;
    // printf("Somme = %d\n", res);
    // printf("Moy = %.2f", moy);

    //exo4
    // int hauteur = 0;
    // int largeur = 0;
    // int res = 0;
    // std::cout << "Entrez la hauteur et la largeur du rectangle: " << std::endl;
    // scanf_s("%d %d", &hauteur, &largeur);
    // res = (hauteur + largeur) * 2;
    // printf("Perimetre = %d\n", res);
    // res = hauteur * largeur;
    // printf("Surface = %d\n", res);

    //exo5
    // int rayon,hauteur = 0;
    // std::cout << "Entrez le rayon du cercle: " << std::endl;
    // scanf("%d", &rayon);
    // int diametre = rayon*2;
    // printf("Diametre = %d\n", diametre);
    // printf("Circonference = %lf\n", diametre*M_PI);
    // printf("Aire = %lf\n", M_PI*pow(rayon,2));
    //
    // std::cout << "\nEntrez la hauteur du cylindre: " << std::endl;
    // scanf("%d", &hauteur);
    // printf("Volume = %lf\n", M_PI*pow(rayon,2)*hauteur);

    //exo6
    char txt;
    std::cout << "Entrez une lettre en minuscule" << std::endl;
    scanf_s("%c", &txt);
    printf("%c\n", tolower(txt));


    return 0;
}
