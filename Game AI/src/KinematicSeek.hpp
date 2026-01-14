#ifndef KINEMATIC_SEEK
#define KINEMATIC_SEEK

#include "Static.hpp"
#include "SteeringOutput.hpp"

struct KinematicSeek {
    Static character;
    Static target;
    float maxSpeed;

    /** He made this virt */
    SteeringOutput getSteering();
};

#endif //KINEMATIC_SEEK