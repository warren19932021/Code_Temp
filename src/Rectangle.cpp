#include "Rectangle.h"
#include <iostream>
using namespace std;

  Rectangle::Rectangle(float length,float width)
  {
	 Length = length; Width = width;
  };

  Rectangle::~Rectangle()
  {
  };
	  
  float Rectangle::CalculateArea(){
	 float  area = Length*Width;
	 return area; 
	};
	float  Rectangle::CalculateCircumference(){
	 float  circumference = 2*(Length+Width);
	return circumference; 
	};
