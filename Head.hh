#ifndef HEAD_HH
#define HEAD_HH

#include <GL/glut.h>
#include "Point.hh"

class Head {
	public:
		Head(GLfloat x, GLfloat y, GLfloat z);
		void	render(void);
		Head	*setYAngle(GLfloat y);
		Head	*setXAngle(GLfloat x);
		Head	*setZAngle(GLfloat z);
	private:
		GLfloat _y_angle = 0.0f;
		GLfloat _x_angle = 0.0f;
		GLfloat _z_angle = 0.0f;
		Point		_anchor;
};

#endif
