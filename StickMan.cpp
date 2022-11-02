#include <GL/glut.h>
#include "StickMan.hh"

StickMan::StickMan() :
	_head(0.0f, 0.55f, 0.0f),
	_torso(0.0f, 0.0f, 0.0f),
	_leftArm(0.25f, 0.45f, 0.0f, true),
	_rightArm(-0.25f, 0.45f, 0.0f, false),
	_leftLeg(0.02f, -0.45f, 0.0f, true),
	_rightLeg(-0.02f, -0.45f, 0.0f, false)
{
}

void	StickMan::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	this->_torso.render();
	this->_head.render();
	this->_leftArm.render();
	this->_rightArm.render();
	this->_leftLeg.render();
	this->_rightLeg.render();
}

StickMan	*StickMan::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
