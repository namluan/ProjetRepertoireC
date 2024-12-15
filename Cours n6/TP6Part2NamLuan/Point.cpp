//
// Created by namlu on 15/11/2024.
//

#include "Point.h"

#include <math.h>
#include <valarray>
using namespace std;

Point::Point(int x, int y):x(x), y(y) {}

double Point::distance(Point p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}



