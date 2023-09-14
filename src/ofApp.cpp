#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    ofSetBackgroundAuto(true);
    //to get good pictures try slowing the framerate
    ofSetFrameRate(5);
    
    BSineOne.setup();
    BSineTwo.setup();
    //This is where we size the FBO
    _fbo.allocate(Constants::fboWidth,Constants::fboHeight, GL_RGB);
    
    _fbo.begin();
    ofClear(0);
    _fbo.end();
    
   
}

//--------------------------------------------------------------
void ofApp::update(){
    BSineOne.update();
    BSineTwo.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if (_saveToFbo) {
      _fbo.begin();
    }
    
    BSineOne.draw();
    BSineTwo.draw();
        
    if (_saveToFbo) {
      _fbo.end();
      _saveToFbo = false;
      
      ofPixels pixels;
      _fbo.readToPixels(pixels);
      ofImage image;
      image.allocate(_fbo.getWidth(), _fbo.getHeight(), OF_IMAGE_COLOR);
      image.setFromPixels(pixels);
      
      string filename = "Revolutions_" + timeStamp() + "_" + ofToString(saveCount,3,'0') + ".png";
      
      image.save(filename);
      
    }
}
    
void ofApp::keyPressed(int key){
    if (key == ' ') {
      _saveToFbo = true;
    }
        
    }
    

