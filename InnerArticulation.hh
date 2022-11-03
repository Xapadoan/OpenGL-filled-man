#ifndef INNER_ARTICULATION_HH
#define INNER_ARTICULATION_HH

#include <GL/glut.h>
#include <vector>
#include "Point.hh"

class InnerArticulation
{
	public:
		InnerArticulation(Point pos, std::vector<GLfloat> min_dr, std::vector<GLfloat> max_dr);
		GLfloat	drx(void);
		GLfloat	dry(void);
		GLfloat drz(void);
		GLfloat	dx(void);
		GLfloat	dy(void);
		GLfloat dz(void);
		InnerArticulation	*setDrx(GLfloat drx);
		InnerArticulation	*setDry(GLfloat dry);
		InnerArticulation	*setDrz(GLfloat drz);
	private:
		GLfloat				_dx = 0.0f;
		GLfloat				_dy = 0.0f;
		GLfloat				_dz = 0.0f;
		GLfloat				_drx = 0.0f;
		GLfloat				_dry = 0.0f;
		GLfloat				_drz = 0.0f;
		GLfloat				_max_drx = 180.0f;
		GLfloat				_min_drx = -180.0f;
		GLfloat				_max_dry = 180.0f;
		GLfloat				_min_dry = -180.0f;
		GLfloat				_max_drz = 180.0f;
		GLfloat				_min_drz = -180.0f;
};

#endif
