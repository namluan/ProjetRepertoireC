//
// Created by namlu on 15/11/2024.
//

#include "Student.h"

#include <iostream>
#include <ostream>
using namespace std;

float Student::calc_moy() {
    return (note1+note2)/2;
}

void Student::show() {
    cout<<"La moyenne de " << nom << " est : " << calc_moy() <<endl;
}
