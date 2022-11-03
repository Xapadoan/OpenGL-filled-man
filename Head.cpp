#include <GL/glut.h>
#include "Head.hh"

Head::Head(RelativePoint &anchor) :
	_articulation(anchor, {45.0f, 90.0f, 45.0f}, {-45.0f, -90.0f, -45.0f})
{
}

void	Head::render(void)
{
	glTranslatef(this->_articulation.x(), this->_articulation.y(), this->_articulation.z());
	glRotatef(this->_articulation.rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(this->_articulation.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(this->_articulation.rz(), 0.0f, 0.0f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.1f, 0.1f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.1f, -0.1f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.1f, 0.1f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(-0.1f, 0.1f, 0.1f);

	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);

	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);
	glVertex3f(-0.1f, 0.3f, -0.1f);

	glVertex3f(0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);

	glVertex3f(0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);
	glVertex3f(0.1f, 0.3f, -0.1f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);

	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.3f, -0.1f);

	glVertex3f(-0.1f, 0.1f, -0.1f);
	glVertex3f(0.1f, 0.3f, -0.1f);
	glVertex3f(-0.1f, 0.3f, -0.1f);

	glVertex3f(0.1f, 0.3f, 0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glVertex3f(0.1f, 0.3f, -0.1f);
	glVertex3f(-0.1f, 0.3f, -0.1f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glVertex3f(0.1f, 0.3f, -0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);
	glVertex3f(0.0f, 0.4f, 0.0f);

	glVertex3f(-0.1f, 0.3f, -0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);
	glVertex3f(0.0f, 0.4f, 0.0f);
	glEnd();
	glRotatef(-this->_articulation.rz(), 0.0f, 0.0f, 1.0f);
	glRotatef(-this->_articulation.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(-this->_articulation.rx(), 1.0f, 0.0f, 0.0f);
	glTranslatef(-this->_articulation.x(), -this->_articulation.y(), -this->_articulation.z());
}

Head	*Head::setXAngle(GLfloat x)
{
	this->_articulation.setRx(x);
	return (this);
}

Head	*Head::setYAngle(GLfloat y)
{
	this->_articulation.setRy(y);
	return (this);
}

Head	*Head::setZAngle(GLfloat z)
{
	this->_articulation.setRz(z);
	return (this);
}
