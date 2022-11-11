#include <GL/glut.h>
#include "Man.hh"

Man::Man() :
	_torso(0.0f, 0.0f, 0.0f),
	_head(_torso.headAnchor()),
	_leftArm(_torso.leftArmAnchor(), true),
	_rightArm(_torso.rightArmAnchor(), false),
	_leftLeg(_torso.leftLegAnchor(), true),
	_rightLeg(_torso.rightLegAnchor(), false),
	_ry(0),
	_position(0.0f, 0.0f, 0.0f)
{
}

void	Man::render(void)
{
	glTranslatef(this->_position.x(), this->_position.y(), this->_position.z());
	glRotatef(this->_ry, 0.0f, 1.0f, 0.0f);
	this->_torso.render();
	this->_head.render();
	this->_leftArm.render();
	this->_rightArm.render();
	this->_leftLeg.render();
	this->_rightLeg.render();
	glRotatef(-this->_ry, 0.0f, 1.0f, 0.0f);
	glTranslatef(-this->_position.x(), -this->_position.y(), -this->_position.z());
}

Man	*Man::setRy(GLfloat y)
{
	this->_ry = y;
	return (this);
}

GLfloat	Man::ry(void)
{
	return (this->_ry);
}

Man	*Man::setPosition(GLfloat x, GLfloat y, GLfloat z)
{
	this->_position.setX(x);
	this->_position.setY(y);
	this->_position.setZ(z);
	return (this);
}

Point	&Man::position(void)
{
	return (this->_position);
}
