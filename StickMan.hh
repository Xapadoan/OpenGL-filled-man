#ifndef STICKMAN_HH
#define STICKMAN_HH

#include <GL/glut.h>

#include "Head.hh"
#include "Torso.hh"
#include "Arm.hh"
#include "Leg.hh"

class StickMan
{
	public:
		StickMan();
		void	render(void);
		StickMan	*setYAngle(GLfloat y);
	private:
		GLfloat _y_angle = 0.0f;
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
