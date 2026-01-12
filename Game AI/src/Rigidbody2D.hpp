#ifndef RIGIDBODY_2D
#define RIGIDBODY_2D

#include "ofMain.h"
#include "SteeringOutput.hpp"
#include "Static.hpp"

struct Rigidbody2D {
    /** The x, y coordinates of the Rigidbody2D */
    ofVec2f position;

    /** The angle of rotation around the z axis, expressed in radians */
    float orientation;

    /** The current linear velocity of the Rigidbody 2D */
    ofVec2f linear;

    /** TODO: Review what angular velocity is */
    float angular;

    /// @brief 
    /// @param steering 
    /// @param time 
    void update(const SteeringOutput& steering, float time);
};

#endif //RIGIDBODY_2D