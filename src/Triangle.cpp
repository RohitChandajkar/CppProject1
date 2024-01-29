#include"../headers/Triangle.h"

Triangle:: Triangle(int b, int h)
    {
        this->base=b;
        this->height=h;
    }

Triangle::~Triangle()
{

}

void Triangle::area()
{
    cout<<"Area: "<<1/2*(base*height);
}

void Triangle:: perimeter(int a, int b, int c)
{
    cout<<"\nPerimeter: "<<(a+b+c);
}