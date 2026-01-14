#ifndef STEERING_OUTPUT
#define STEERING_OUTPUT

#include "ofMain.h"

struct SteeringOutput {
    /** The linear velocity of the SteeringOutput as expressed in x and y */
    ofVec2f linear;

    /** The  */
    float angular;
};

#endif // STEERING_OUTPUT