#ifndef ARM_HH
#define ARM_HH

#include <GL/glut.h>
#include "RelativePoint.hh"

class Arm {
	public:
		Arm(RelativePoint &anchor, bool side);
		void	render();
		Arm		*setYAngle(GLfloat y);
	private:
		GLfloat					_y_angle = 0.0f;
		RelativePoint		&_anchor;
		bool						_side = false;
};

#endif
