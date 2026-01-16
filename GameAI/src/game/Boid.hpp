#ifndef BOID
#define BOID

#include "ofMain.h"
#include <glm/gtc/reciprocal.hpp>

class Boid {
    private:
        float radius;
        glm::vec2 v1, v2, v3;

    public:
        Boid(float radius, float theta = 5 * glm::pi<float>() / 15) : radius(radius) {
            v1 = glm::vec2(radius * glm::cos(theta), radius * glm::sin(theta));
            v2 = glm::vec2(v1.x, radius * glm::sin(theta));
            v3 = glm::vec2(radius * glm::sec<float>(theta), 0);
        }

        void draw() {
            float x = 1024/2, y = 768/2;
            ofDrawCircle(x, y, radius);

            ofDrawTriangle(
                x + v1.x, y + v1.y,
                x + v2.x, y - v2.y,
                x + v3.x, y + v3.y);
        }
};

#endif // BOID