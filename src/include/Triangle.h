#include <cmath>


class Triangle {

	private:
	int sides[3];
	// int side2;
	// int side3;

	public:
	int getSide1() { return sides[0]; }
	int getSide2() { return sides[1]; }
	int getSide3() { return sides[2]; }

	Triangle(int s1, int s2, int s3) {
		sides[0] = s1;
		sides[1] = s2;
		sides[2] = s3;
	}

	Triangle() {

		sides[0] = 0;
		sides[1] = 0;
		sides[2] = 0;

	}

    double getArea();
	bool largerThan(Triangle t2);

};


// double triangleArea(Triangle t);

double sumAreas(Triangle triangles[], int size);

Triangle findLargest(Triangle triangles[], int size);