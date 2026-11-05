#include "RigidBody.hpp"

RigidBody::RigidBody(
    Vec2 position,
    Vec2 velocity,
    Vec2 acceleration
)
    : position(position),
      velocity(velocity),
      acceleration(acceleration)
{
}

void RigidBody::update(double deltaTime)
{
    velocity = velocity + acceleration * deltaTime;
    position = position + velocity * deltaTime;
}