#include "KinematicSeek.hpp"

SteeringOutput KinematicSeek::getSteering() {
    SteeringOutput result = SteeringOutput();

    // Get the direction to target
    result.linear = target.position - character.position;

    // Set the direction to full speed
    result.linear.normalize();
    result.linear *= maxSpeed;

    // CONTINUE

    return result;
}