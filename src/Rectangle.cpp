#include"../headers/Rectangle.h"


Rectangle::Rectangle(int l, int b)
{
    this->length=l;
    this->breadth=b;
}

Rectangle::~Rectangle()
{

}

void Rectangle::area()
{
  cout<<"Area: "<<length*breadth;
}

void Rectangle::perimeter()
{
    cout<<"\n perimeter: "<<2*(length+breadth);
}