//
// Created by Mishach on 27.03.2023.
//

#include "Circle.hpp"

namespace sh {


    double Circle::calculateArea() {
        area = PI * radius;
        return  area;
    }

    double Circle::getX() const {
        return x;
    }

    double Circle::getY() const {
        return y;
    }

    double Circle::getRadius() const {
        return radius;
    }

}


// sh