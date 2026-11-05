#pragma once

class Vec2 {
    public:
        double x;
        double y;

        Vec2(double x, double y);

        Vec2 operator+(const Vec2& other) const;
        Vec2 operator-(const Vec2& other) const;
        Vec2 operator*(double scalar) const;
};