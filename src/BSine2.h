


#ifndef BSine2_h
#define BSine2_h

#include "ofMain.h"
#include "Constants.h"
class BSine2 {

    public:
    void setup();
    void update();
    void draw();    

  
   BSine2();  // constructor - used to initialize an object, if no properties are passed the program sets them to the default value

private:
    float startAngle2;
    float angleVel2;
    float angle2;
};

















#endif /* BSine_hpp */

