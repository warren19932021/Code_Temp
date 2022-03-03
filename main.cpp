#include<iostream>
#include<math.h>
//#include "include/Shape.h"
#include "include/Square.h"
using namespace std;




   int main(){


      Shape * shape_A = new Square(10);
		cout<<"Area of Square: "<<shape_A->CalculateArea()<<endl;
		cout<<"circumference of Square: "<<shape_A->CalculateCircumference()<<endl;
      Shape * shape_B = new Rectangle(10,20);      
		cout<<"Area of Rectangle: "<<shape_B->CalculateArea()<<endl;
		cout<<"circumference of Rectangle "<<shape_B->CalculateCircumference()<<endl;
       

      return 0;

   
   
   }
