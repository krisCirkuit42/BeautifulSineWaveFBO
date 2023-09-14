#pragma once

#include "ofMain.h"
#include "BSine.h"
#include "BSine2.h"
#include "Constants.h"
class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    BSine  BSineOne;
    BSine2 BSineTwo;
  
private:
  
  ofFbo _fbo;
  bool _saveToFbo;
  
  int saveCount = 1;
    unsigned long actualTime, pictureTimer;
    unsigned int pictureTimeDelta;
  inline string timeStamp() {
    return ofToString(ofGetYear(),0,4,'0') + ofToString(ofGetMonth(),0,2,'0') + ofToString(ofGetDay(),0,2,'0') + "-" + ofToString(ofGetHours(),0,2,'0') + ofToString(ofGetMinutes(),0,2,'0') + ofToString(ofGetSeconds(),0,2,'0');
  };
};
    
