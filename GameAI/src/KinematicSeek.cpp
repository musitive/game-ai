#include "KinematicSeek.hpp"

float newOrientation(float orientation, const ofVec2f& velocity, const ofVec2f& targetPosition) {
    return velocity.length() ? atan2f(-targetPosition.x, targetPosition.y) : orientation;
}

KinematicSeek::KinematicSeek(
    const Static& character,
    const Static& target,
    float maxSpeed) :
    character(character),
    target(target),
    maxSpeed(maxSpeed)
{}

SteeringOutput KinematicSeek::getSteering() {
    SteeringOutput result = SteeringOutput();

    // Get the direction to target
    result.linear = target.position - character.position;

    // Set the direction to full speed
    result.linear.normalize();
    result.linear *= maxSpeed;

    character.orientation = newOrientation(
        character.orientation,
        result.linear,
        target.position);
    
    result.angular = 0;

    return result;
}