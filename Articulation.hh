#ifndef ARTICULATION_HH
#define ARTICULATION_HH

#include <GL/glut.h>
#include <vector>
#include "RelativePoint.hh"

class Articulation
{
	public:
		Articulation(RelativePoint &pos, std::vector<GLfloat> min_r, std::vector<GLfloat> max_r);
		GLfloat	rx(void);
		GLfloat	ry(void);
		GLfloat rz(void);
		GLfloat	x(void);
		GLfloat	y(void);
		GLfloat z(void);
		Articulation	*setRx(GLfloat rx);
		Articulation	*setRy(GLfloat ry);
		Articulation	*setRz(GLfloat rz);
	private:
		RelativePoint	&_pos;
		GLfloat				_rx = 0.0f;
		GLfloat				_ry = 0.0f;
		GLfloat				_rz = 0.0f;
		GLfloat				_max_rx = 180.0f;
		GLfloat				_min_rx = -180.0f;
		GLfloat				_max_ry = 180.0f;
		GLfloat				_min_ry = -180.0f;
		GLfloat				_max_rz = 180.0f;
		GLfloat				_min_rz = -180.0f;
};

#endif
