#include "DynamicSeek.hpp"

DynamicSeek::DynamicSeek(const float maxLinearAcceleration) :
    maxLinearAcceleration(maxLinearAcceleration) {}

const SteeringOutput DynamicSeek::GetSteeringOutput(
    const Rigidbody2D& character,
    const Rigidbody2D& target) const
{
    ofVec2f direction = target.position - character.position;
    direction.normalize();
    direction *= maxLinearAcceleration;

    return { direction, 0.f };
}
