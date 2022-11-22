/*
(The Rectangle class)
Design a class named Rectangle to represent a rectangle. The class contains:
Two double data fields named width and height that specify the width and height of the rectangle.
A no-arg constructor that creates a rectangle with width 1 and height 1.
A constructor that creates a rectangle with the specified width and height.
The accessor and mutator functions for all the data fields.
A function named getArea() that returns the area of this rectangle.
A function named getPerimeter() that returns the perimeter.
Implement the class. Write a test program that creates two Rectangle objects. Assign width 4 and height 40 to the first object and width 3.5 and height 35.9 to the second. Display the width, height, area, and perimeters of the first object and then the second object.
Use the code from https://liangcpp.pearsoncmg.com/test/Exercise09_01.txt to complete your program.
For a hint on this program, please see https://liangcpp.pearsoncmg.com/cpprevel2e.html.
If you get a logic or runtime error, please refer to https://liangcpp.pearsoncmg.com/faq.html. 
*/

#include<iostream>
using namespace std;

class Rectangle
{
  double width;
  double height;
  public:
       Rectangle()
       {
         width = 1;
         height = 1;
       }

       Rectangle(double w, double h)
       {
         width = w;
         height = h;
       }

        double getArea()
        {
          return width*height;
        }

        double getPerimeter()
        {
          return 2*(width+height);
        }

};


int main()
{
  Rectangle R;
  Rectangle R1(4, 40);
  Rectangle R2(3.5, 35.9);

  cout<<"Area of first Rectangle = "<<R1.getArea()<<endl;
  cout<<"Perimeter of first Rectangle = "<<R1.getPerimeter()<<endl;
  cout<<"Area of second Rectangle = "<<R2.getArea()<<endl;
  cout<<"Perimeter of second Rectangle = "<<R2.getPerimeter()<<endl;


  return 0;
}
