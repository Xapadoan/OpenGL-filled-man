#ifndef LEG_HH
#define LEG_HH

#include <GL/glut.h>
#include "Point.hh"

class Leg {
	public:
		Leg(GLfloat x, GLfloat y, GLfloat z, bool side);
		void	render();
		Leg		*setYAngle(GLfloat y);
	private:
		GLfloat	_y_angle = 0.0f;
		Point		_anchor;
		bool		_side = false;
};

#endif
