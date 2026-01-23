#include "Static.hpp"

float Static::newOrientation(float current, const ofVec2f& velocity) {
    return velocity.length() ? atan2f(-position.x, position.y) : orientation;
}