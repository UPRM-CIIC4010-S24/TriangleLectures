#include <math.h>
#include <iostream>
#include <string>
#include <vector>
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
	Triangle t3(30,30,10);


	cout << t1.getArea() << endl;
	cout << t2.getArea() << endl;
	cout << t3.getArea() << endl;

	//Triangle t3;

	if (t1.largerThan(t2)) {
		cout << "First triangle is larger" << endl;
	} else {
		cout << "First triangle is NOT larger" << endl;
	}

	t1.scale(2);

	t1.scale(0.5);

	// Triangle tArray[3] {t1,t2,t3};

	vector<Triangle> tVector {t1,t2,t3};

	cout << "The sum of the areas is: " << Triangle::sumAreas(vector<Triangle> {t1,t2}) << endl;

	Triangle::scale(tVector,2);

	exit(0);

}