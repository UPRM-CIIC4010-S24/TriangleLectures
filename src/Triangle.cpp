#include "include/Triangle.h"

// double triangleArea(Triangle t) {

// 	double s = (t.getSide1()+t.getSide2()+t.getSide3())/2.0;
// 	double area = sqrt(s * (s-t.getSide1()) * (s-t.getSide2()) * (s-t.getSide3()));
// 	return area;

// }

double Triangle::getArea() const {

        double s = (this->getSide1() + this->getSide2() + this->getSide3()) / 2.0;
        double area = sqrt(s * (s - this->getSide1()) * (s - this->getSide2()) * (s - this->getSide3()));
        return area;
}

void Triangle::scale(double factor) {

	sides[0] *= factor;
	sides[1] *= factor;
	sides[2] *= factor;

}

void Triangle::scale(double foo) {

	sides[0] *= foo;
	sides[1] *= foo;
	sides[2] *= foo;

}

void Triangle::scale() {
	// Default factor to 2

	this->scale(2);

}

bool Triangle::largerThan(Triangle t2) {

	return (this->getArea() > t2.getArea());

}

double Triangle::sumAreas(const vector<Triangle> &triangles) {

	double result = 0.0;

	for (int i=0; i<triangles.size(); i++) {
		result += triangles[i].getArea();
	}

	return result;

}

Triangle Triangle::findLargest(Triangle triangles[], int size) {

	Triangle largestTriangle = triangles[0];
	for (int i=1; i<size; i++) {
		if (triangles[i].getArea() > largestTriangle.getArea()) {
			largestTriangle = triangles[i];
		}
	}
	return largestTriangle;
}

void Triangle::scale(vector<Triangle> &triangles, double factor) {

	for (int i=0; i<triangles.size(); i++) {
		triangles[i].scale(factor);
	}

}