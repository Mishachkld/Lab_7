//
// Created by Mishach on 27.03.2023.
//
#pragma once

#include <string>
#include <utility>
#include <iostream>
#include <cmath>
#include <utility>

namespace sh {

    class Shape {
    public:
        Shape(double x, double y, std::string colour) : x(x), y(y), colour(std::move(colour)) {};

        virtual ~Shape() = default;

        virtual double calculateArea()  = 0;

        virtual void printShape() const = 0;

        static constexpr double PI = 3.14;  // можно и из Math взять
    public:
        double getX() const {
            return x;
        }

        double getY() const {
            return y;
        }

        double getArea() const {
            return area;
        }

        void setArea(double area) {
            Shape::area = area;
        }

        const std::string &getColour() const {
            return colour;
        }

    private:
        double y;
        double x;
        double area = -1;  // площадь
        std::string colour;

    };

} // sh
//LAB_7_SHAPE_HPP
