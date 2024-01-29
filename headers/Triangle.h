#include<iostream>
using namespace std;

class Triangle
{

    public:
    Triangle(int b, int h);
    ~Triangle();
    void area();
    void perimeter(int a, int b, int c);

    private:
    int base, height;

};