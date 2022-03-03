#include "Shape.h"
class Rectangle: public Shape{

 public:
    	Rectangle(float,float);
        ~Rectangle();

       float CalculateArea();
       float CalculateCircumference();

 public:
    	  float Length;
          float Width;

};
