#include <GL/glut.h>
#include "Head.hh"

Head::Head(GLfloat x, GLfloat y, GLfloat z) :
	_anchor(x, y, z)
{
}

void	Head::render(void)
{
	glTranslatef(this->_anchor.x(), this->_anchor.y(), this->_anchor.z());
	glRotatef(this->_x_angle, 1.0f, 0.0f, 0.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);
	glRotatef(this->_z_angle, 0.0f, 0.0f, 1.0f);

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
	glTranslatef(-this->_anchor.x(), -this->_anchor.y(), -this->_anchor.z());
}

Head	*Head::setXAngle(GLfloat x)
{
	this->_x_angle = x;
	return (this);
}

Head	*Head::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}

Head	*Head::setZAngle(GLfloat z)
{
	this->_z_angle = z;
	return (this);
}
