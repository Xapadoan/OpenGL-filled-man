#ifndef TORSO_HH
#define TORSO_HH

#include <GL/glut.h>
#include "Point.hh"
#include "RelativePoint.hh"

class Torso
{
	public:
		Torso(GLfloat x, GLfloat y, GLfloat z);
		void					render(void);
		Torso					*setYAngle(GLfloat y);
		RelativePoint	&headAnchor();
		RelativePoint	&leftArmAnchor();
		RelativePoint	&rightArmAnchor();
		RelativePoint	&leftLegAnchor();
		RelativePoint	&rightLegAnchor();
	private:
		GLfloat 				_y_angle = 0.0f;
		Point						_anchor;
		RelativePoint		_head_anchor;
		RelativePoint		_left_arm_anchor;
		RelativePoint		_right_arm_anchor;
		RelativePoint		_left_leg_anchor;
		RelativePoint		_right_leg_anchor;
};

#endif
