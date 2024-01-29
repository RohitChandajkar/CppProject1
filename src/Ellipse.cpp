
#include"../headers/Ellipse.h"


Ellipse:: Ellipse(int mX, int mY)
{
this->majorX=mX;
this->minorY=mY;
}

   Ellipse::~Ellipse()
   {

   }
   void Ellipse::area()
   {
         cout<<"Area: "<<(3.14*majorX*minorY);
   }

   void Ellipse:: perimeter()
   {
     cout<<"\nPerimeter: "<<(3.14*(majorX+minorY));
   }