#pragma once

class RigidBody {
    public:
        double positionY;
        double velocityY;
        double accelerationY;

        RigidBody(
            double initialPositionY,
            double initialVelocityY,
            double initialAccelerationY
        );

        void update(double deltaTime);
};