#include <string>
//
// Created by namlu on 09/12/2024.
//
using namespace std;
#include "mymap.h"
#include <map>
#include <iostream>

//2
void affiche(map<string, float>mymap) {
    map<string, float>::iterator it;
    for (it = mymap.begin(); it != mymap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
};

//3
void total(map<string, float>mymap) {
    map<string, float>::iterator it;
    float total = 0;
    for (it = mymap.begin(); it != mymap.end(); it++) {
        total += it->second;
    }
    cout << "Le cout total est de " << total << " $"  << endl;
}

int main() {
    //1
    map<string, float> mymap;

    mymap["poulet"] = 12;
    mymap["burger"] = 17;
    mymap["frite"] = 4;
    mymap["riz"] = 5;
    mymap["tiramisu"] = 22;

    affiche(mymap);
    total(mymap);
}




