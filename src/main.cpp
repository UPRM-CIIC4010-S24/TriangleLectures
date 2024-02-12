#include <math.h>
#include <iostream>
#include <string>
#include "include/Triangle.h"

using namespace std;

int main(){

	double area = Triangle(10,10,10).getArea();
	cout << "The area of 10x10x10 triangle is: " << area << "\n";

	area = Triangle(5,5,5).getArea();
	cout << "The area of 5x5x5 triangle is: " << area << "\n";

	area = Triangle(5,10,100).getArea();
	cout << "The area of 5x10x10 triangle is: " << area << "\n";

	Triangle t1(10,10,10);
	Triangle t2(20,20,20);

	cout << t1.getArea() << endl;

	cout << t1.getArea() << endl;
	cout << t2.getArea() << endl;

	Triangle t3;

	if (largerThan(t1,t2)) {
		cout << "First triangle is larger" << endl;
	} else {
		cout << "First triangle is NOT larger" << endl;
	}

	exit(0);

}