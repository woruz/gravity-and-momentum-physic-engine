#pragma once

#include "Vec2.hpp"

class RigidBody {
public:
    Vec2 position;
    Vec2 velocity;
    Vec2 acceleration;

    RigidBody(
        Vec2 position,
        Vec2 velocity,
        Vec2 acceleration
    );

    void update(double deltaTime);
};