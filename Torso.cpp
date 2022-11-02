#include <GL/glut.h>
#include "Torso.hh"

Torso::Torso(GLfloat x, GLfloat y, GLfloat z) :
	_anchor(x, y, z),
	_head_anchor(_anchor, 0.0f, 0.55f, 0.0f),
	_left_arm_anchor(_anchor, 0.25f, 0.45f, 0.0f),
	_right_arm_anchor(_anchor, -0.25f, 0.45f, 0.0f),
	_left_leg_anchor(_anchor, 0.02f, -0.45f, 0.0f),
	_right_leg_anchor(_anchor, 0.0f, -0.45f, 0.0f)
{
}

void	Torso::render(void)
{
	glTranslatef(this->_anchor.x(), this->_anchor.y(), this->_anchor.z());
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);

	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);

	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.45f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);

	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);

	glVertex3f(-0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);

	glVertex3f(-0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);

	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.45f, 0.05f);

	glVertex3f(0.05f, 0.45f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.45f, -0.05f);

	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, 0.1f);

	glVertex3f(0.25f, -0.45f, 0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);

	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);

	glVertex3f(-0.25f, -0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);

	glVertex3f(0.25f, -0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, 0.1f);

	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glEnd();
	glTranslatef(-this->_anchor.x(), -this->_anchor.y(), -this->_anchor.z());
}

Torso	*Torso::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}

RelativePoint	&Torso::headAnchor()
{
	return (this->_head_anchor);
}

RelativePoint	&Torso::leftArmAnchor()
{
	return (this->_left_arm_anchor);
}

RelativePoint	&Torso::rightArmAnchor()
{
	return (this->_right_arm_anchor);
}

RelativePoint	&Torso::leftLegAnchor()
{
	return (this->_left_leg_anchor);
}

RelativePoint	&Torso::rightLegAnchor()
{
	return (this->_right_leg_anchor);
}
