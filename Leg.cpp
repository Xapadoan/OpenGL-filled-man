#include <GL/glut.h>
#include "Leg.hh"

Leg::Leg(RelativePoint &anchor, bool side) :
	_articulation(anchor, {90.0f, 45.0f, 45.0f}, {-90.0f, -45.0f, -45.0f}),
	_side(side)
{
}

void	Leg::render(void)
{
	glTranslatef(this->_articulation.x(), this->_articulation.y(), this->_articulation.z());
	glRotatef(this->_articulation.rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(this->_articulation.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(this->_articulation.rz(), 0.0f, 0.0f, 1.0f);

	glBegin(GL_TRIANGLES);
	if (this->_side == 1) {
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glVertex3f(0.2f, -1.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);

		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);

		glVertex3f(0.2f, -1.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);

		glVertex3f(0.0f, -1.0f, -0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);

		glColor3f(0.0f, 1.0f, 0.0f);
	} else {
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glVertex3f(-0.2f, -1.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);

		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);

		glVertex3f(-0.2f, -1.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(0.0f, 0.0f, -0.1f);
		glVertex3f(0.0f, -1.0f, -0.1f);

		glVertex3f(0.0f, -1.0f, -0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(0.0f, 0.0f, 0.1f);
		glVertex3f(0.0f, -1.0f, 0.1f);

		glVertex3f(0.0f, -1.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);

		glColor3f(0.0f, 1.0f, 0.0f);
	}
	glEnd();
	glRotatef(-this->_articulation.rz(), 0.0f, 0.0f, 1.0f);
	glRotatef(-this->_articulation.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(-this->_articulation.rx(), 1.0f, 0.0f, 0.0f);
	glTranslatef(-this->_articulation.x(), -this->_articulation.y(), -this->_articulation.z());
}

Leg	*Leg::setXAngle(GLfloat rx)
{
	this->_articulation.setRx(rx);
	return (this);
}

Leg	*Leg::setYAngle(GLfloat ry)
{
	this->_articulation.setRy(ry);
	return (this);
}

Leg	*Leg::setZAngle(GLfloat rz)
{
	this->_articulation.setRz(rz);
	return (this);
}
