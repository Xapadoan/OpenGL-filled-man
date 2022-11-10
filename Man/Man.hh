#ifndef MAN_HH
#define MAN_HH

#include <GL/glut.h>

#include "Head.hh"
#include "Torso.hh"
#include "Arm.hh"
#include "Leg.hh"

class Man
{
	public:
		Man();
		void			render(void);
		Man	*setRy(GLfloat y);
		GLfloat		ry(void);
	private:
		GLfloat _ry = 0.0f;
		Head	_head;
		Torso	_torso;
		Arm		_leftArm;
		Arm		_rightArm;
		Leg		_leftLeg;
		Leg		_rightLeg;

		void	renderRightLeg(void);
		void	renderLeftLeg(void);
		void	renderRightArm(void);
		void	renderLeftArm(void);
};

#endif
