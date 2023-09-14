#include "BSine.h"
BSine::BSine(){
}

void BSine::setup(){
    
    angle = 0;
    angleVel = 0.1;
    startAngle = 0;
}

void BSine::update(){
    startAngle += 0.01;
}

void BSine::draw(){
    ofSetCircleResolution(50);
    float angle = startAngle;
    ofPushMatrix();
    
    for (int x = 0; x <= Constants::fboWidth; x += 10){
        float posX =x;
        
        float posY =  ofMap(sin(angle/2),-1,1,0,Constants::fboWidth);
        float d=ofMap(posY, 0, Constants::fboHeight, 0, 180);
        ofColor p = ofColor::fromHsb(238, 255,255, 240);
        ofSetColor(p);//This circle is hot pink
        ofDrawCircle(posX, posY, d);
        ofColor b = ofColor::fromHsb(124, 255, 255, 130);
        ofSetColor(b);//This circle is bright blue
        ofDrawCircle(posX*2, posY*2, 21);
        
        
        ofDrawCircle(posX, posY,32);
        
        ofPopMatrix();
        angle += angleVel;
    }
}



