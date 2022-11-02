#ifndef POINT_HH
#define POINT_HH

#include <GL/glut.h>

class	Point {
	public:
		Point(GLfloat x, GLfloat y, GLfloat z);
		GLfloat	x(void);
		GLfloat	y(void);
		GLfloat	z(void);
	private:
		GLfloat	_x = 0.0f;
		GLfloat	_y = 0.0f;
		GLfloat	_z = 0.0f;
};

#endif
