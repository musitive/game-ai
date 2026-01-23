#ifndef BOID
#define BOID

#include "ofMain.h"
#include <glm/gtc/reciprocal.hpp>

#include "Rigidbody2D.h"

class Boid {
    private:
        float radius;
        glm::vec2 v1, v2, v3;

    public:
        Rigidbody2D rb;

        Boid(float radius,
             float theta = 5 * glm::pi<float>() / 15);

        void update();
        void draw();
};

#endif // BOID