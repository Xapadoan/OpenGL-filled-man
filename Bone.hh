#include <GL/glut.h>
#include <vector>
#include "Point.hh"

class Bone {
	public:
		Bone(GLfloat *anchors, unsigned int length);
		Point	*getAnchor(unsigned char index);
	private:
		vector<Point> anchors(0);
}
