
#include "BSine2.h"
BSine2::BSine2(){
}

void BSine2::setup(){
    angle2 = 0;
    angleVel2 = 0.1;
    startAngle2 = 0;
}

void BSine2::update(){
    startAngle2 += 0.01;
}

void BSine2::draw(){
    ofSetCircleResolution(50);
    float angle = startAngle2;
    ofPushMatrix();
    for (int x = 0; x <= Constants::fboWidth; x += 10){
        float posX =x;
        
        float posY =  ofMap(sin(angle/2),-1,1,0,Constants::fboWidth);
        
        float e = ofMap(posX, 0, Constants::fboWidth, 0, 180);
        ofColor p = ofColor::fromHsb(238, 255,255, 249);
        ofSetColor(p);//This circle is hot pink
        ofDrawCircle(posY, posX, e);
        ofDrawCircle(posY*2, posX*2, 21);
        ofColor b = ofColor::fromHsb(124, 255, 255, 100);
        ofSetColor(b);//This circle is bright blue
        ofDrawCircle(posY, posX,e*2);
        ofSetColor(0, 0, 0, 30);//This is black circle to "erase".  may need to adjust size.
        ofDrawCircle(posY, posX,e);
        ofPopMatrix();
        angle += angleVel2;
    }
}



