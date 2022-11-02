#ifndef HEAD_HH
#define HEAD_HH

#include <GL/glut.h>
#include "RelativePoint.hh"

class Head {
	public:
		Head(RelativePoint &anchor);
		void	render(void);
		Head	*setYAngle(GLfloat y);
		Head	*setXAngle(GLfloat x);
		Head	*setZAngle(GLfloat z);
	private:
		GLfloat 				_y_angle = 0.0f;
		GLfloat 				_x_angle = 0.0f;
		GLfloat 				_z_angle = 0.0f;
		RelativePoint		&_anchor;
};

#endif
