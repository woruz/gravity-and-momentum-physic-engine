#include "Vec2.hpp"

Vec2::Vec2(double x, double y)
    : x(x), y(y){}

Vec2 Vec2::operator+(const Vec2& other) const {
    return Vec2(x + other.x, y + other.y);
};

Vec2 Vec2::operator-(const Vec2& other) const {
    return Vec2(x - other.x, y - other.y);
};

Vec2 Vec2::operator*(double scalar) const {
    return Vec2(x * scalar, y * scalar);
};