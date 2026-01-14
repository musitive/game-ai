#include "Rigidbody2D.hpp"

void Rigidbody2D::update(const SteeringOutput& steering, float time) {
    // float halfTSq = 0.5f * time * time;

    position += linear * time; // + steering.linear * halfTSq
    orientation += angular * time; // + steering.angularVelocity * halfTSq;

    linear += steering.linear * time;
    angular += steering.angular * time;
}

    /*
    1 function newOrientation(current: float, velocity: Vector) -> float:
2 # Make sure we have a velocity.
3 if velocity.length() > 0:
4 # Calculate orientation from the velocity.
5 return atan2(-static.x, static.z)
6
7 # Otherwise use the current orientation.
8 else:
9 return current */
// float newOrientation(float current, const ofVec2f& velocity) {
//     return velocity.length() ? atan2f(-static.x, static.z) : orientation;
// }