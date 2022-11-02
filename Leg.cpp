#include <GL/glut.h>
#include "Leg.hh"

Leg::Leg(GLfloat x, GLfloat y, GLfloat z, bool side) :
	_anchor(x, y, z),
	_side(side)
{
}

void	Leg::render(void)
{
	glTranslatef(this->_anchor.x(), this->_anchor.y(), this->_anchor.z());
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

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
	glTranslatef(-this->_anchor.x(), -this->_anchor.y(), -this->_anchor.z());
}

Leg	*Leg::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
