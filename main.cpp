#include<iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point a(1, 2), b(3, 4), c(10, 20);
    Point d = a + b;
    Point d1 = a.operator+(b);
    d1 = a * b;
    d1.Print();
    Point d2 = b - a;
    d2.Print();
    Point d3 = a / b;
    d3.Print();
}
