// Program to find the type and area of triangle
#include <iostream>
#include <math.h>
using namespace std;
void type_Of_triangle(int side1, int side2, int side3);
float area(int side1, int side2, int side3);
int main()
{
    int side1, side2, side3;
    cout << "Enter the three sides of a triangle"<<endl;
    cin >> side1 >> side2 >> side3;
    type_Of_triangle(side1, side2, side3);
    int result = area(side1, side2, side3);
    cout << "The area of given triangle is => " << result << endl;
    return 0;
}

void type_Of_triangle(int side1, int side2, int side3)
{
    if (side1 == side2 == side3)
    {
        cout << "The type of the given triangle is Equilateral" << endl;
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "The type of the given triangle is isoceles triangle" << endl;
    }
    else
    {
        cout << "The type of the given triangle is scalene triangle" << endl;
    }
}
float area(int side1, int side2, int side3)
{
    float area;
    float s = side1 + side2 + side3 / 2;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return area;
}