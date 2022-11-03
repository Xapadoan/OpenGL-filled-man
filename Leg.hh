#ifndef LEG_HH
#define LEG_HH

#include <GL/glut.h>
#include "RelativePoint.hh"
#include "Articulation.hh"

class Leg {
	public:
		Leg(RelativePoint &base, bool side);
		void	render();
		Leg		*setXAngle(GLfloat x);
		Leg		*setYAngle(GLfloat y);
		Leg		*setZAngle(GLfloat z);
	private:
		GLfloat					_y_angle = 0.0f;
		Articulation		_articulation;
		bool						_side = false;
};

#endif
