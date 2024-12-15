#include <iostream>
#include <list>
//
// Created by namlu on 09/12/2024.
//
using namespace std;
#include "liste.h"

//2
void affiche(list<int> l) {
    for (int element : l) {
        cout << element << " ";
    }
}

int main() {
    list<int> liste;
    //1
    for (int i = 0; i < 59; i+=2) {
        liste.push_back(i);
    }

    affiche(liste);
    cout << endl;

    //3
    list<int>::iterator it = liste.begin();
    advance(it, 2);
    liste.erase(it);
    //4
    affiche(liste);
    cout << endl;

    //5
    for (int i = 0; i < 39; i+=2) {
        liste.push_back(i);
    }
    //6
    affiche(liste);

}