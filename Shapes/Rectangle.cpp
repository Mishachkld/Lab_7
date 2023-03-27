//
// Created by Mishach on 27.03.2023.
//

#include "Rectangle.hpp"

namespace sh {
    double Rectangle::calculateArea() {
        setArea(a * b);
        return getArea();
    }

    void Rectangle::printShape() const {
        std::cout << "xPos: " << getX() << " yPos: " << getY() << " Colour: " << getColour() << " Area: " << getArea();
        std::cout << std::endl;

    }
} // sh