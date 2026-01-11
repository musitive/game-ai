#include "ofMain.h"

struct SteeringOutput {
    /** The linear velocity of the SteeringOutput as expressed in x and y */
    ofVec2f linear;

    /** TODO: Review what this is and how to implement it */
    float angular;
};