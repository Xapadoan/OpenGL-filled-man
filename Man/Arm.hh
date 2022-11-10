#ifndef ARM_HH
#define ARM_HH

#include <GL/glut.h>
#include "RelativePoint.hh"
#include "Articulation.hh"
#include "InnerArticulation.hh"

class Arm {
	public:
		Arm(RelativePoint &anchor, bool side);
		void	render();
		void	renderUpperArm();
		void	renderForearm();
		Arm		*setXAngle(GLfloat x);
		Arm		*setYAngle(GLfloat y);
		Arm		*setZAngle(GLfloat z);
	private:
		GLfloat						_y_angle = 0.0f;
		Articulation			_shoulder;
		InnerArticulation	_elbow;
		bool							_side = false;
};

#endif
