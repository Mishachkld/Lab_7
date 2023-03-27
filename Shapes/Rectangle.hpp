//
// Created by Mishach on 27.03.2023.
//
#pragma once

#include "Shape.hpp"

namespace sh {

class Rectangle: public sh::Shape{
public:
    Rectangle( double x, double y, std::string colour, double a, double b): x(x), y(y), colour(std::move(colour)) {
        if ((a >0)  and (b >= 0)){
            this->a = a;
            this->b = b;
        }
    };

    double calculateArea() override;
private:
    double x;
    double y;
    std::string colour;
    double area = -1;
    double a, b;



};

} // sh
