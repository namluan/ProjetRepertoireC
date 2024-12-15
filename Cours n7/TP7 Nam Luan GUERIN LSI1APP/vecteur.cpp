//
// Created by namlu on 06/12/2024.
//

#include "vecteur.h"

#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

void affiche(vector<string> unVecteur) {
    for (size_t i = 0; i < unVecteur.size(); i++) {
        cout << unVecteur[i] << " ";
    }
}

string concatene(vector<string> unVecteur) {
    string concatenate = "";
    for (size_t i = 0; i < unVecteur.size(); i++) {
        concatenate += unVecteur[i];
    }
    return concatenate;
}

int main() {

    vector<string> monVecteur;
    monVecteur.push_back("bonjour");
    monVecteur.push_back("comment");
    monVecteur.push_back("allez");
    monVecteur.push_back("vous");
    monVecteur.push_back("?");

    cout << "Taille : " << monVecteur.size() << endl;
    cout << "Capacite : " << monVecteur.capacity() << endl;
    // Rep a la question 3 : La taille correspond a la taille de mon vecteur alors que la capacité est sa capacité max en octet

    cout << "\nAffichage monVecteur[k] :" <<endl;
    for (size_t i = 0; i < monVecteur.size(); i++) {
        cout << monVecteur[i] << endl;
    }

    cout << "\nAffichage avec iterateurs :" <<endl;
    for (auto it = monVecteur.begin(); it != monVecteur.end(); ++it) {
        cout << *it << endl;
    }

    swap(monVecteur[1], monVecteur[3]);
    cout << "\nVecteur apres l'echange : " << endl;
    for (size_t i = 0; i < monVecteur.size(); i++) {
        cout << monVecteur[i] << endl;
    }

    sort(monVecteur.begin(), monVecteur.end());
    cout << "\nVecteur apres l'echange : " << endl;
    for (size_t i = 0; i < monVecteur.size(); i++) {
        cout << monVecteur[i] << endl;
    }

    affiche(monVecteur);

    cout << concatene(monVecteur) << endl;

    monVecteur.push_back("à tous");

    affiche(monVecteur);

}