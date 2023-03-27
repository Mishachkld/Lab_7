//
// Created by Mishach on 27.03.2023.
//
#pragma once

#include <string>
#include <utility>

namespace sh {

    class Shape {
    public:
       // Shape(double x, double y, const std::string &colour):x(x), y(y), colour(std::move(colour)){}
        Shape() {}
        virtual double calculateArea() = 0;
        static constexpr double PI = 3.14;
    private:
       /* double x;
        double y;
        std::string colour;
        */

    };

} // sh
 //LAB_7_SHAPE_HPP
