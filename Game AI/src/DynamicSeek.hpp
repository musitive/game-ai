#ifndef DYNAMIC_SEEK
#define DYNAMIC_SEEK

#include "ofMain.h"
#include "Rigidbody2D.hpp"
#include "SteeringOutput.hpp"

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

#endif //DYNAMIC_SEEK