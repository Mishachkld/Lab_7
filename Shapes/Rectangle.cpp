//
// Created by Mishach on 27.03.2023.
//

#include "Rectangle.hpp"

namespace sh {
    double Rectangle::calculateArea() {
        setArea(a * b);
        return getArea();
    }

} // sh