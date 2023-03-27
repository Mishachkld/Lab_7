//
// Created by Mishach on 27.03.2023.
//
#pragma once

#include "Shape.hpp"
#include <cmath>

namespace sh {

    class Triangle:virtual public sh::Shape{
    public:
        Triangle( double x, double y, std::string colour, double a, double b, double c): x(x), y(y), colour(std::move(colour)) {
            if ((a >0)  and (b >= 0) and (c >= 0)){
                this->a = a;
                this->b = b;
                this->c = c;
            }
        };

        double calculateArea() override;
    private:
        double a,b,c; // стороны треугольника
        double x;
        double y;
        double area = -1;  // площадь
        std::string colour;
    };

} // sh
