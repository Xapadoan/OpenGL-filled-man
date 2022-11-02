#include <GL/glut.h>
#include "StickMan.hh"

StickMan::StickMan() :
	_torso(0.0f, 0.0f, -1.0f),
	_head(_torso.headAnchor()),
	_leftArm(_torso.leftArmAnchor(), true),
	_rightArm(_torso.rightArmAnchor(), false),
	_leftLeg(_torso.leftLegAnchor(), true),
	_rightLeg(_torso.rightLegAnchor(), false)
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
