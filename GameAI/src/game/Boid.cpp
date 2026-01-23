#include "Boid.h"

Boid::Boid(float radius, float theta) : radius(radius) {
    v1 = glm::vec2(radius * glm::cos(theta), radius * glm::sin(theta));
    v2 = glm::vec2(v1.x, -v1.y);
    v3 = glm::vec2(radius * glm::sec<float>(theta), 0);
}

void Boid::update() {}

void Boid::draw() {
    float x = rb.position.x, y = rb.position.y;
    ofDrawCircle(x, y, radius);

    ofDrawTriangle(
        x + v1.x, y + v1.y,
        x + v2.x, y + v2.y,
        x + v3.x, y + v3.y);
}