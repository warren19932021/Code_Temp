#include "Square.h"
#include <iostream>
using namespace std;
 
  Square::Square(float sideLength)
  {
	 SideLength = sideLength;
  };

  Square::~Square()
  {

     cout<<"output from Square.cpp made by worker_A"<<endl;
  };


	

  float Square::CalculateArea(){
	 float  area = SideLength*SideLength;
	 return area; 
	};
	float  Square::CalculateCircumference(){
	 float  circumference = 4*SideLength;
	return circumference; 
	};
