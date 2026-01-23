#include "ofApp.h"
#include "game/Boid.hpp"
#include "KinematicSeek.hpp"
#include "KinematicArrive.hpp"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetCircleResolution(50); // For smoother looking circles + ellipses

    boids.push_back(std::make_shared<Boid>(20));
    boids[0]->rb.position = ofVec2f(150,900);
    boids.push_back(std::make_shared<Boid>(20));
    boids[1]->rb.position = ofVec2f(300,300);
}

//--------------------------------------------------------------
void ofApp::update() {
    for (std::shared_ptr<Boid> boid : boids) {

        KinematicArrive arrive = KinematicArrive(
            Static(boid->rb.position, boid->rb.orientation),
            Static(ofVec2f(700,700), 0),
            0.0001f,
            100,
            0.25f
        );

        boid->rb.update(arrive.getSteering(), 10.f);
        boid->update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofBackground(255);  // Clear the screen with a black color
    ofSetColor(0);  // Set the drawing color to white

    ofDrawCircle(700, 700, 5);

    for (std::shared_ptr<Boid> boid : boids) {
        boid->draw();
    }
}

//--------------------------------------------------------------
void ofApp::exit() {

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) { 

}
