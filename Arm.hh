#ifndef ARM_HH
#define ARM_HH

#include <GL/glut.h>
#include "RelativePoint.hh"
#include "Articulation.hh"

class Arm {
	public:
		Arm(RelativePoint &anchor, bool side);
		void	render();
		Arm		*setXAngle(GLfloat x);
		Arm		*setYAngle(GLfloat y);
		Arm		*setZAngle(GLfloat z);
	private:
		GLfloat					_y_angle = 0.0f;
		Articulation		_shoulder;
		bool						_side = false;
};

#endif
