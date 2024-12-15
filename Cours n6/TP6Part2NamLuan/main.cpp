#include <iostream>
#include "Rectangle.h"
#include "Somme.h"
#include "Student.h"
#include "Point.h"
using namespace std;





int main() {
    // //EXO 8
    // Rectangle rect;
    // rect.a = 5;
    // rect.b = 12;
    // cout << rect.surface() << endl;
    //
    // //EXO 9
    // Somme somme;
    // cout << "Entrez un 1er nombre : " << endl;
    // cin >> somme.n1;
    // cout << "Entrez un 2eme nombre : " << endl;
    // cin >> somme.n2;
    // cout << "La somme de " << somme.n1 << " " << somme.n2 << " est : " << somme.Sum() << endl;

    // //EXO 10
    // Student student;
    // cout << "Entrez une note : " << endl;
    // cin >> student.note1;
    // cout << "Entrez une autre note : " << endl;
    // cin >> student.note2;
    // cout << "Entrez votre nom : " << endl;
    // cin >> student.nom;
    // student.show();

    //EXO 11
    Point point1(5,6);
    Point point2(3,2);
    cout << "La distance entre point 1 et point 2 est : " << point1.distance(point2) << endl;


    return 0;
}
