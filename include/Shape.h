#ifndef SHAPE1_H
#define SHAPE1_H

class Shape
{
public:
	Shape();
	~Shape();

        virtual float CalculateArea(){};
        virtual float CalculateCircumference(){};

};




#endif
