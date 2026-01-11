#include "Rigidbody2D.hpp"

void Rigidbody2D::update(const SteeringOutput& steering, float time) {
    // float halfTSq = 0.5f * time * time;

    position += linear * time; // + steering.linear * halfTSq
    orientation += angular * time; // + steering.angularVelocity * halfTSq;

    linear += steering.linear * time;
    angular += steering.angular * time;
}