#ifndef KINEMATIC_ARRIVE
#define KINEMATIC_ARRIVE

#include "SteeringOutput.hpp"
#include "Static.hpp"

struct KinematicArrive {
    Static character;
    Static target;
    float maxSpeed;
    float radius;
    float timeToTarget;

    KinematicArrive(
        const Static& character,
        const Static& target,
        float maxSpeed,
        float radius,
        float timeToTarget
    ) :
        character(character),
        target(target),
        maxSpeed(maxSpeed),
        radius(radius),
        timeToTarget(timeToTarget) {}

    SteeringOutput getSteering() {
        SteeringOutput result;
        ofVec2f direction = target.position - character.position;
        if (direction.length() < radius) return result;
        
        result.linear = direction / timeToTarget;
        if (result.linear.length() > maxSpeed) {
            result.linear.normalize();
            result.linear *= maxSpeed;
        }

        // character.orientation = newOrient

        return result;
    }
};

#endif // KINEMATIC_ARRIVE