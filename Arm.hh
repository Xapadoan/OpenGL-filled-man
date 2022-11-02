#ifndef ARM_HH
#define ARM_HH

#include <GL/glut.h>

class Arm {
	public:
		Arm(bool side);
		void	render();
		Arm		*setYAngle(GLfloat y);
	private:
		GLfloat	_y_angle = 0.0f;
		bool		_side = false;
};

#endif
