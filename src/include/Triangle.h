#include <cmath>


class Triangle {

	public:
	int side1;
	int side2;
	int side3;

	Triangle(int s1, int s2, int s3) {
		side1 = s1;
		side2 = s2;
		side3 = s3;
	}

};


double triangleArea(Triangle t);

bool largerThan(Triangle t1, Triangle t2);

double sumAreas(Triangle triangles[], int size);

Triangle findLargest(Triangle triangles[], int size);