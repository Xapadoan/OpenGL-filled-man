#include <GL/glut.h>
#include "StickMan.hh"

StickMan::StickMan() :
	_leftArm(true),
	_rightArm(false),
	_leftLeg(true),
	_rightLeg(false)
{
}

void	StickMan::renderRightLeg(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 0.0, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-0.0f, 0.0f, 0.0f);
	glVertex3f(-0.3f, -0.5f, 0.0f);
	glVertex3f(-0.5f, -1.0f, 0.0f);
	glEnd();
}

void	StickMan::renderLeftLeg(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 0.0, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.3f, -0.5f, 0.0f);
	glVertex3f(0.5f, -1.0f, 0.0f);
	glEnd();
}

void	StickMan::renderRightArm(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 1.0f, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -0.1f, 0.0f);
	glVertex3f(-0.3f, -0.4f, 0.0f);
	glVertex3f(0.0f, -0.4f, 0.0f);
	glEnd();
}

void	StickMan::renderLeftArm(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 1.0f, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, -0.1f, 0.0f);
	glVertex3f(0.3f, -0.4f, 0.0f);
	glVertex3f(0.0f, -0.4f, 0.0f);
	glEnd();
}

void	StickMan::render(void)
{
	// this->renderRightLeg();
	// this->renderLeftLeg();
	this->_leftLeg.render();
	this->_rightLeg.render();
	this->_torso.render();
	this->_leftArm.render();
	this->_rightArm.render();
	this->_head.render();
}

StickMan	*StickMan::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	this->_head.setYAngle(y);
	this->_torso.setYAngle(y);
	this->_leftArm.setYAngle(y);
	this->_rightArm.setYAngle(y);
	this->_leftLeg.setYAngle(y);
	this->_rightLeg.setYAngle(y);
	return (this);
}
