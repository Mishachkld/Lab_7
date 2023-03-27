//
// Created by Mishach on 27.03.2023.
//

#include "Triangle.hpp"

namespace sh {


    double Triangle::calculateArea() {
        double p = (a + b + c) / 2;

        setArea(sqrt(p * (p - a) * (p - b) * (p - c)));
        return getArea();
    }
    void Triangle::printShape() const {
        std::cout << "xPos: " << getX() << " |yPos: " << getY() << " |Size a " << a << " |Area: " << getArea();
        std::cout << std::endl;

    }
} // sh