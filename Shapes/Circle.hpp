//
// Created by Mishach on 27.03.2023.
//

#pragma once

#include <utility>

#include "Shape.hpp"

namespace sh {

    class Circle : virtual public sh::Shape {
    public:
        Circle(double x, double y, std::string colour, double radius)
                : Shape(x, y, std::move(colour)){
            if (radius >= 0)
                this->radius = radius;
        }

        double getRadius() const;

        double calculateArea() override ;

        void printShape() const override;

    private:
        double radius = -1;
        //const double PI = 3.14; // можно использовать с библиотеки Math

    };

} // sh
