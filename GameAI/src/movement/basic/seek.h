#ifndef SEEK
#define SEEK

#include "ofMain.h"
#include "physics/Static.h"
#include "physics/Rigidbody2D.h"
#include "SteeringOutput.h"

namespace movement {
namespace basic {

struct KinematicSeek {
    Static character;
    Static target;
    float maxSpeed;

    KinematicSeek(const Static& character,
                const Static& target,
                float maxSpeed);

    SteeringOutput getSteering();
};

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

struct DynamicSeek {
    /** The max linear acceleration that is used to calculate SteeringOutput velocity */
    float maxLinearAcceleration;

    /// @brief 
    /// @param maxLinearAcceleration 
    explicit DynamicSeek(const float maxLinearAcceleration);

    /// @brief 
    /// @param character 
    /// @param target 
    /// @return 
    const SteeringOutput GetSteeringOutput(
        const Rigidbody2D& character,
        const Rigidbody2D& target) const;
};

} // basic
} // movement

#endif // SEEK