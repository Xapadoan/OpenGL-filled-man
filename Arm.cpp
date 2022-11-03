#include <GL/glut.h>
#include "Arm.hh"

Arm::Arm(RelativePoint &anchor, bool side) :
	_shoulder(anchor, {180.0f, 45.0f, 180.0f}, {-180.0f, -45.0f, -180.0f}),
	_side(side)
{
}

void	Arm::render(void)
{
	glTranslatef(this->_shoulder.x(), this->_shoulder.y(), this->_shoulder.z());
	glRotatef(this->_shoulder.rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(this->_shoulder.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(this->_shoulder.rz(), 0.0f, 0.0f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	if (this->_side == 1) {
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);

		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);

		glVertex3f(0.0f, -0.9f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);

		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.1f, -0.9f, 0.05);

		glVertex3f(0.1f, -0.9f, 0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, -0.9f, -0.05);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);
		glVertex3f(0.1f, -0.9f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);

		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(0.1f, -0.9f, -0.05);

		glVertex3f(0.0f, -0.9f, 0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(0.1f, -0.9f, 0.05);

		glVertex3f(0.1f, -0.9f, 0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(0.1f, -0.9f, -0.05);
	} else {
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);

		glVertex3f(-0.0f, -0.9f, 0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(-0.1f, -0.9f, 0.05);

		glVertex3f(-0.1f, -0.9f, 0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(-0.1f, -0.9f, -0.05);

		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);

		glVertex3f(0.0f, -0.9f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);

		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(-0.1f, -0.9f, 0.05);

		glVertex3f(-0.1f, -0.9f, 0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, -0.9f, -0.05);

		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);

		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.9f, -0.05);
		glVertex3f(-0.1f, -0.9f, -0.05);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.9f, 0.05);
		glVertex3f(-0.1f, -0.9f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);
	}
	glEnd();
	glRotatef(-this->_shoulder.rz(), 0.0f, 0.0f, 1.0f);
	glRotatef(-this->_shoulder.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(-this->_shoulder.rx(), 1.0f, 0.0f, 0.0f);
	glTranslatef(-this->_shoulder.x(), -this->_shoulder.y(), -this->_shoulder.z());
}

Arm	*Arm::setXAngle(GLfloat x)
{
	this->_shoulder.setRx(x);
	return (this);
}

Arm	*Arm::setYAngle(GLfloat y)
{
	this->_shoulder.setRy(y);
	return (this);
}

Arm	*Arm::setZAngle(GLfloat z)
{
	this->_shoulder.setRz(z);
	return (this);
}
