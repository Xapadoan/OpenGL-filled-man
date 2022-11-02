#include <GL/glut.h>
#include "Head.hh"

void	Head::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 1.0f, -7.0f);
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

	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);

	glVertex3f(-0.1f, 0.1f, 0.1f);
	glVertex3f(0.1f, 0.3f, 0.1f);
	glVertex3f(-0.1f, 0.3f, 0.1f);

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
