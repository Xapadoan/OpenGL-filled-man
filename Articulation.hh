#ifndef ARTICULATION_HH
#define ARTICULATION_HH

#include <GL/glut.h>
#include "RelativePoint.hh"

class Articulation
{
	public:
		Articulation(RelativePoint &pos, GLfloat rx, GLfloat ry, GLfloat rz);
		GLfloat	rx(void);
		GLfloat	ry(void);
		GLfloat rz(void);
	private:
		RelativePoint	&_pos;
		GLfloat				_rx = 0.0f;
		GLfloat				_ry = 0.0f;
		GLfloat				_rz = 0.0f;
};

#endif
