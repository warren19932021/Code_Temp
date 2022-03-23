#include<iostream>
#include<math.h>
#include "Square.h"
using namespace std;


   int main(){


      Shape * shape_A = new Square(10);

		cout<<"Area of Square: "<<shape_A->CalculateArea()<<endl;
		cout<<"circumference of Square: "<<shape_A->CalculateCircumference()<<endl;
 
   

    

      return 0;

   
   
   }
