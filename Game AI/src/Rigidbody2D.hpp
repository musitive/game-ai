#include "ofMain.h"
#include "SteeringOutput.hpp"

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

/** TODO: THIS IS FOR STATIC BODIES */

    /// @brief 
    /// @param current 
    /// @param velocity 
    /// @return 
    // float newOrientation(float current, const ofVec2f& velocity) {
    //     return velocity.length() ? atan2f() 
    // }
};