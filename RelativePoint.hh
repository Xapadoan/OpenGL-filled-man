#ifndef RELATIVE_POINT_HH
#define RELATIVE_POINT_HH

#include <GL/glut.h>
#include "Point.hh"

class	RelativePoint {
	public:
		RelativePoint(Point &base, GLfloat dx, GLfloat dy, GLfloat dz);
		GLfloat	x(void);
		GLfloat	y(void);
		GLfloat	z(void);
	private:
		Point		&_base;
		GLfloat	_dx = 0.0f;
		GLfloat	_dy = 0.0f;
		GLfloat	_dz = 0.0f;
};

#endif
