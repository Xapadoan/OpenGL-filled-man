#include <GL/glut.h>
#include "StickMan.hh"

StickMan::StickMan() :
	_torso(0.0f, 0.0f, 0.0f),
	_head(_torso.headAnchor()),
	_leftArm(_torso.leftArmAnchor(), true),
	_rightArm(_torso.rightArmAnchor(), false),
	_leftLeg(_torso.leftLegAnchor(), true),
	_rightLeg(_torso.rightLegAnchor(), false),
	_ry(0)
{
}

void	StickMan::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -7.0f);
	glRotatef(this->_ry, 0.0f, 1.0f, 0.0f);
	this->_torso.render();
	this->_head.render();
	this->_leftArm.render();
	this->_rightArm.render();
	this->_leftLeg.render();
	this->_rightLeg.render();
	glRotatef(-this->_ry, 0.0f, 1.0f, 0.0f);
	glTranslatef(0.0f, 0.0f, 7.0f);
}

StickMan	*StickMan::setRy(GLfloat y)
{
	this->_ry = y;
	return (this);
}

GLfloat	StickMan::ry(void)
{
	return (this->_ry);
}
