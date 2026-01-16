#ifndef STATIC
#define STATIC

#include "ofMain.h"

struct Static {
    /** The x, z position of the static body */
    ofVec2f position;

    /** The orientation of the static body */
    float orientation;

    /// @brief 
    /// @param current 
    /// @param velocity 
    /// @return 
    float newOrientation(float current, const ofVec2f& velocity);
};

#endif //STATIC