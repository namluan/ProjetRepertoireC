//
// Created by namlu on 29/11/2024.
//

#ifndef FILLEB_H
#define FILLEB_H

#include "MereA.h"
#include <iostream>


class FilleB : public MereA {
public:
    void display() const {
        std::cout << "Message de la classe fille B." << std::endl;
    }
};



#endif //FILLEB_H
