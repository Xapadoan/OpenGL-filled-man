#ifndef ARM_HH
#define ARM_HH

#include <GL/glut.h>
#include "Point.hh"

class Arm {
	public:
		Arm(GLfloat x, GLfloat y, GLfloat z, bool side);
		void	render();
		Arm		*setYAngle(GLfloat y);
	private:
		GLfloat	_y_angle = 0.0f;
		Point		_anchor;
		bool		_side = false;
};

#endif
