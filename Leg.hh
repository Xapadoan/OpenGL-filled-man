#ifndef LEG_HH
#define LEG_HH

#include <GL/glut.h>
#include "RelativePoint.hh"

class Leg {
	public:
		Leg(RelativePoint &base, bool side);
		void	render();
		Leg		*setYAngle(GLfloat y);
	private:
		GLfloat					_y_angle = 0.0f;
		RelativePoint		&_anchor;
		bool						_side = false;
};

#endif
