#include <cmath>
#include <vector>

using namespace std;

class Triangle {	

	private:
	int sides[3];
	// int side2;
	// int side3;

	public:
	int getSide1() const { return sides[0]; }
	int getSide2() const { return sides[1]; }
	int getSide3() const { return sides[2]; }

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

    double getArea() const;
	bool largerThan(Triangle t2);
	void scale(double factor);
	void scale(double foo);
	void scale();

	static double sumAreas(const vector<Triangle> &triangles);
	static Triangle findLargest(Triangle triangles[], int size);
	static void scale(vector<Triangle> &triangles, double factor);

};
