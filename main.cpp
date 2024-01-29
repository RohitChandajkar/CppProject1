#include "headers/Rectangle.h"
#include "headers/Circle.h"
#include "headers/Triangle.h"
#include "headers/Square.h"
#include "headers/Ellipse.h"

int main()
{
    int n = 0;

   

    while (n != 10)
    {
        cout<<"\n**************************************************";
        cout<<"\nSelect shape:\n";
        cout << "\n1.Rectangle\n2.Circle\n3.Triangle\n4.Square\n5.Ellipse\n10.Exit";
        cout<<"\n************************************************";
        cout << "\nEnter Your Choice:\n ";
         cin >> n;

        if (n == 1)
        {

            int ch1;
            int l, b;
            cout << "Enter length and Breadth of Rectangle: \n";
            cin >> l >> b;
            Rectangle r1(l, b);
            cout << "\n1.area\n2.perimeter";
            cout << "\nEnter Your Choice:\n ";
            cin >> ch1;

            if (ch1 == 1)
            {
                r1.area();
            }
            else if (ch1 == 2)
            {
                r1.perimeter();
            }
        }
        else if (n == 2)
        {

            int ch2, r;

            cout << "\n\nEnter Radius of circle:\n ";
            cin >> r;
            Circle c1(r);
            cout << "\n1.area\n2.perimeter";
            cout << "\nEnter Your Choice: ";
            cin >> ch2;

            if (ch2 == 1)
            {
                c1.area();
            }
            else if (ch2 == 2)
            {
                c1.perimeter();
            }
        }
        else if (n == 3)
        {

            int ch3, b, h;
            cout << "\nEnter BAse and Height of Triangle:\n ";
            cin >> b >> h;
            Triangle t1(b, h);

            cout << "\nWhat do you want to find\n1.area\n2.perimeter";
            cout << "\nEnter Your Choice:\n ";
            cin >> ch3;

            if (ch3 == 1)
            {
                t1.area();
            }
            else if (ch3 == 2)
            {
                int a,b,c;
                cout<<"\nEnter value of three side triangle:\n";
                cin>>a>>b>>c;

                t1.perimeter(a,b,c);
            }
        }
        else if (n == 4)
        {

            int ch4, s;
            cout << "\nEnter the value of side of square :\n ";
            cin >> s;
            Square s1(s);

            cout << "\nWhat do you want to find\n1.area\n2.perimeter\n";
            cout << "\nEnter Your Choice:\n ";
            cin >> ch4;

            if (ch4 == 1)
            {

                s1.area();
            }
            else if (ch4 == 2)
            {

                s1.perimeter();
            }
        }
        else if (n == 5)
        {

            int ch5, x, y;
            cout << "\nEnter the value of major and minor axis of ellipse : \n";
            cin >> x >> y;
            Ellipse e1(x, y);

            cout << "\nWhat do you want to find\n1.area\n2.perimeter";
            cout << "\nEnter Your Choice:\n ";
            cin >> ch5;

            if (ch5 == 1)
            {

                e1.area();
            }
            else if (ch5 == 2)
            {

                e1.perimeter();
            }
        }
        else
        {
           cout<<"\n Invalid choice..!";
        }
    }

    return 0;
}