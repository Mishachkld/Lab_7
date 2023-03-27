//
// Created by Mishach on 27.03.2023.
//

#include "Circle.hpp"

namespace sh {


    double Circle::calculateArea() {
        setArea(PI * radius);
        return getArea();
    }

    double Circle::getRadius() const {
        return radius;
    }

    void Circle::printShape() const {
        std::cout << "xPos: " << getX() << " yPos: " << getY() << " Radius: " << getRadius() << " Area: " << getArea();
        std::cout << std::endl;
    }

}


// sh