#ifndef TORSO_HH
#define TORSO_HH

#include <GL/glut.h>
#include "Point.hh"

class Torso
{
	public:
		Torso(GLfloat x, GLfloat y, GLfloat z);
		void	render(void);
		Torso	*setYAngle(GLfloat y);
	private:
		GLfloat _y_angle = 0.0f;
		Point		_anchor;
};

#endif
