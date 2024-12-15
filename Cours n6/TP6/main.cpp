#include <iostream>
using namespace std;

//EXO 5
namespace fonctions {


    namespace arithmetique_space {
        int Addition(int a, int b) {
            return a + b;
        }

        int Multiplication(int a, int b) {
            return a * b;
        }

        int Soustraction(int a, int b) {
            return a - b;
        }

        float Division(int a, int b) {
            if (b != 0) {
                return static_cast<float>(a) / b;
            } else {
                cout << "Erreur: division par zéro !" << endl;
                return 0;
            }
        }
    }

    namespace logique_space {
        bool Et_logique(bool a, bool b) {
            return a && b;
        }

        bool Ou_logique(bool a, bool b) {
            return a || b;
        }
    }

    namespace Multiple2 {
        int estMultipleDe2(int n) {
            return (n % 2 == 0);
        }
    }

    namespace Multiple3 {
        int estMultipleDe3(int n) {
            return (n % 3 == 0);
        }
    }
}

int main() {
    // //EXO 1
    // int prix, kilo, tva;
    // std::cout << "Entrez le prix HT d'un kilo de tomates" << std::endl;
    // std::cin >> prix;
    // std::cout << "Entrez le nombre de kilo acheté" << std::endl;
    // std::cin >> kilo;
    // std::cout << "Entrez le taux de TVA" << std::endl;
    // std::cin >> tva;
    // double total = prix * kilo * (1 + tva / 100.0);
    // std::cout << "Le prix total est de " << total << std::endl;

    // //EXO 2
    // int N;
    // cout << "Enter la valeur de l'entier N" << endl;
    // cin >> N;
    // if (N >= 5) {
    //     int somme = 0;
    //
    //     // Calculer la somme des cubes de 5 à N
    //     for (int i = 5; i <= N; ++i) {
    //         somme += i * i * i;  // Ajouter le cube de i à la somme
    //     }
    //     cout << "La somme des cubes de 5^3 a " << N << "^3 est : " << somme << endl;
    //
    //     return 0;
    // }

    // //EXO 3
    // int N;
    // do {
    //     cout << "Entrez un entier entre 0 et 20" << endl;
    //     cin >> N;
    //     if (N>=0 && N<=20) {
    //         cout << N+17 << endl;
    //     }
    //     else {
    //         cout << "La valeur est hors des bornes" << endl;
    //     }
    // } while (N < 0 || N > 20);

    // //EXO 4
    // int N,i = 0;
    // double moy;
    // do {
    //     cout << "Tapez un entier strictement positif" << endl;
    //     cin >> N;
    //     if (N < 0) {
    //         do {
    //             cout << "Tapez un entier strictement positif et pas negatif" << endl;
    //             cin >> N;
    //         } while (N < 0);
    //     }
    //     moy += N;
    //     if (N > 0) {
    //         i+= 1;
    //     }
    //
    // } while (N != 0);
    // if (i != 0) {
    //     cout << moy/i << endl;
    // }

    // //EXO 5
    // using namespace fonctions::arithmetique_space;
    //
    // using namespace fonctions::logique_space;
    //
    // int a = 10, b = 5;
    // cout << "Addition: " << Addition(a, b) << endl;
    // cout << "Multiplication: " << Multiplication(a, b) << endl;
    // cout << "Soustraction: " << Soustraction(a, b) << endl;
    // cout << "Division: " << Division(a, b) << endl;
    //
    // bool x = true, y = false;
    // cout << "ET logique: " << Et_logique(x, y) << endl;
    // cout << "OU logique: " << Ou_logique(x, y) << endl;

    // //EXO 6
    /*
     *Le programme retourne les resultats suivants :
    dans le fct : n = 10 p = 5 q = 20
    dans le main : n = 20 p = 5 q = 2
    dans le f : n = 10 p = 20 q = 2
    */

    //EXO 7
    int nombre;

    cout << "donnez un entier : ";
    cin >> nombre;

    if (fonctions::Multiple2::estMultipleDe2(nombre)) {
        cout << "il est pair" << endl;
    }
    if (fonctions::Multiple3::estMultipleDe3(nombre)) {
        cout << "il est multiple de 3" << endl;
    }
    if (fonctions::Multiple2::estMultipleDe2(nombre) && fonctions::Multiple3::estMultipleDe3(nombre)) {
        cout << "il est divisible par 6" << endl;
    }

    return 0;
}

