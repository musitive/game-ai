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