//
// Created by Mishach on 27.03.2023.
//

#pragma once

#include <utility>

#include "Shape.hpp"

namespace sh {

    class Circle : virtual private sh::Shape {
    public:
        Circle(double x, double y, std::string colour, double radius): x(x), y(y), colour(std::move(colour)) {
            if (radius >= 0)
                this->radius = radius;
        }

        double getX() const;

        double getY() const;

        double getRadius() const;

        double calculateArea() override;
    private:
        double x;
        double y;
        double area = -1;  // площадь
        double radius = -1;
        std::string colour;
        //const double PI = 3.14; // можно использовать с библиотеки Math

    };

} // sh
