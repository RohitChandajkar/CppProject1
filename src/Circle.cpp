#include"../headers/Circle.h"

Circle::Circle(int r)
{
    this->radius=r;
}

Circle::~Circle()
{

}

void Circle:: area()
{
    cout<<"area: "<<(3.14*radius*radius);
}

void Circle:: perimeter()
{
    cout<<"\nPerimeter: "<<(2*3.14*radius);
}