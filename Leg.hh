#ifndef LEG_HH
#define LEG_HH

#include <GL/glut.h>

class Leg {
	public:
		Leg(bool side);
		void	render();
		Leg		*setYAngle(GLfloat y);
	private:
		GLfloat	_y_angle = 0.0f;
		bool		_side = false;
};

#endif
