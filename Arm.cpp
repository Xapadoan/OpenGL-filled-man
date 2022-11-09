#include <GL/glut.h>
#include "Arm.hh"

Arm::Arm(RelativePoint &anchor, bool side) :
	_shoulder(anchor, {180.0f, 45.0f, 180.0f}, {-180.0f, -45.0f, -180.0f}),
	_elbow(Point(0.0f, -0.45f, 0.0f), {0.0f, 0.0f, 0.0f}, {-135.0f, 0.0f, 0.0f}),
	_side(side)
{
}

void	Arm::renderUpperArm(void)
{
	glBegin(GL_TRIANGLES);
	if (this->_side == true) {
		// Top
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);

		// Inner
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		// Outer
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glVertex3f(0.1f, -0.45f, 0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);

		// Back
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);

		// Front
		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);

		// Bottom
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glVertex3f(0.1f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);
	} else {
		// Top
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);

		// Bottom
		glVertex3f(-0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glVertex3f(-0.1f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		// Inner
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		// Outer
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glVertex3f(-0.1f, -0.45f, 0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		// Back
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		// Front
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);
	}
	glEnd();
}

void	Arm::renderForearm(void)
{
	glBegin(GL_TRIANGLES);
	if (this->_side == 1) {
		// TOP
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		// Inner
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		// Outer
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glVertex3f(0.1f, -0.45f, 0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);

		// Front
		glColor3f(1.0f, 0.0f, 0.0f);

		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);

		// Back
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		glVertex3f(0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);

		// Botom
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, 0.05);

		glVertex3f(0.1f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(0.1f, -0.45f, -0.05);
	} else {
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);

		glVertex3f(-0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glVertex3f(-0.1f, -0.45f, 0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glVertex3f(-0.1f, -0.45f, 0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		glVertex3f(0.0f, 0.0f, -0.05);
		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);

		glVertex3f(-0.1f, 0.0f, -0.05);
		glVertex3f(0.0f, -0.45f, -0.05);
		glVertex3f(-0.1f, -0.45f, -0.05);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.0f, 0.0f, 0.05);
		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);

		glVertex3f(-0.1f, 0.0f, 0.05);
		glVertex3f(0.0f, -0.45f, 0.05);
		glVertex3f(-0.1f, -0.45f, 0.05);

		glColor3f(0.0f, 1.0f, 0.0f);
	}
	glEnd();
}

void	Arm::render(void)
{
	glTranslatef(this->_shoulder.x(), this->_shoulder.y(), this->_shoulder.z());
	glRotatef(this->_shoulder.rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(this->_shoulder.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(this->_shoulder.rz(), 0.0f, 0.0f, 1.0f);

	this->renderUpperArm();

	glTranslatef(this->_elbow.dx(), this->_elbow.dy(), this->_elbow.dz());
	glRotatef(this->_elbow.drx(), 1.0f, 0.0f, 0.0f);
	glRotatef(this->_elbow.dry(), 0.0f, 1.0f, 0.0f);
	glRotatef(this->_elbow.drz(), 0.0f, 0.0f, 1.0f);

	this->renderForearm();

	glRotatef(-this->_elbow.drz(), 0.0f, 0.0f, 1.0f);
	glRotatef(-this->_elbow.dry(), 0.0f, 1.0f, 0.0f);
	glRotatef(-this->_elbow.drx(), 1.0f, 0.0f, 0.0f);
	glTranslatef(-this->_elbow.dx(), -this->_elbow.dy(), -this->_elbow.dz());

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
