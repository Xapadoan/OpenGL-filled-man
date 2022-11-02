#include <GL/glut.h>
#include "Leg.hh"

Leg::Leg(bool side) : _side(side)
{
}

void	Leg::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 0.0, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	if (this->_side == 1) {
		glVertex3f(-0.02f, 0.0f, 0.1f);
		glVertex3f(-0.02f, 0.0f, -0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.02f, 0.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, 0.1f);

		glVertex3f(-0.02f, -1.0f, 0.1f);
		glVertex3f(-0.02f, -1.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glVertex3f(-0.2f, -1.0f, -0.1f);
		glVertex3f(-0.02f, -1.0f, 0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);

		glVertex3f(-0.02f, 0.0f, 0.1f);
		glVertex3f(-0.02f, 0.0f, -0.1f);
		glVertex3f(-0.02f, -1.0f, 0.1f);

		glVertex3f(-0.02f, -1.0f, 0.1f);
		glVertex3f(-0.02f, 0.0f, -0.1f);
		glVertex3f(-0.02f, -1.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);

		glVertex3f(-0.2f, -1.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.02f, 0.0f, -0.1f);
		glVertex3f(-0.02f, -1.0f, -0.1f);

		glVertex3f(-0.02f, -1.0f, -0.1f);
		glVertex3f(-0.2f, 0.0f, -0.1f);
		glVertex3f(-0.2f, -1.0f, -0.1f);

		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(-0.02f, 0.0f, 0.1f);
		glVertex3f(-0.02f, -1.0f, 0.1f);

		glVertex3f(-0.02f, -1.0f, 0.1f);
		glVertex3f(-0.2f, 0.0f, 0.1f);
		glVertex3f(-0.2f, -1.0f, 0.1f);
	} else {
		glVertex3f(0.02f, 0.0f, 0.1f);
		glVertex3f(0.02f, 0.0f, -0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.02f, 0.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, 0.1f);

		glVertex3f(0.02f, -1.0f, 0.1f);
		glVertex3f(0.02f, -1.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glVertex3f(0.2f, -1.0f, -0.1f);
		glVertex3f(0.02f, -1.0f, 0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);

		glVertex3f(0.02f, 0.0f, 0.1f);
		glVertex3f(0.02f, 0.0f, -0.1f);
		glVertex3f(0.02f, -1.0f, 0.1f);

		glVertex3f(0.02f, -1.0f, 0.1f);
		glVertex3f(0.02f, 0.0f, -0.1f);
		glVertex3f(0.02f, -1.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);

		glVertex3f(0.2f, -1.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.02f, 0.0f, -0.1f);
		glVertex3f(0.02f, -1.0f, -0.1f);

		glVertex3f(0.02f, -1.0f, -0.1f);
		glVertex3f(0.2f, 0.0f, -0.1f);
		glVertex3f(0.2f, -1.0f, -0.1f);

		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.02f, 0.0f, 0.1f);
		glVertex3f(0.02f, -1.0f, 0.1f);

		glVertex3f(0.02f, -1.0f, 0.1f);
		glVertex3f(0.2f, 0.0f, 0.1f);
		glVertex3f(0.2f, -1.0f, 0.1f);
	}
	glEnd();
}

Leg	*Leg::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
