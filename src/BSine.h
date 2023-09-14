

#ifndef BSine_h
#define BSine_h

#include "ofMain.h"
#include "Constants.h"
class BSine {
    
public:
    void setup();
    void update();
    void draw();
    
    
    
    BSine();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value
    
private:
    float startAngle;
    float angleVel;
    float angle;
};


















#endif /* BSine_hpp */

