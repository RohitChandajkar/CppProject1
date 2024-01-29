#include"../headers/Square.h"

Square::Square(int s){
  this->side=s;
}

Square::~Square(){

}


void Square:: area(){
    cout<<"Area :"<<(side*side);
}


void Square:: perimeter(){
  cout<<"\nPerimeter: "<<(4*side);
}