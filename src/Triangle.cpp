#include "include/Triangle.h"

double triangleArea(Triangle t) {

	double s = (t.side1+t.side2+t.side3)/2.0;
	double area = sqrt(s * (s-t.side1) * (s-t.side2) * (s-t.side3));
	return area;

}

bool largerThan(Triangle t1, Triangle t2) {

	return (triangleArea(t1) > triangleArea(t2));

}

double sumAreas(Triangle triangles[], int size) {

	double result = 0.0;

	for (int i=0; i<size; i++) {
		result += triangleArea(triangles[i]);
	}

	return result;

}

Triangle findLargest(Triangle triangles[], int size) {

	Triangle largestTriangle = triangles[0];
	for (int i=1; i<size; i++) {
		if (triangleArea(triangles[i]) > triangleArea(largestTriangle)) {
			largestTriangle = triangles[i];
		}
	}
	return largestTriangle;
}