#include <GL/glut.h>
#include "Arm.hh"

Arm::Arm(RelativePoint &anchor, bool side) :
	_anchor(anchor),
	_side(side)
{
}

void	Arm::render(void)
{
	glTranslatef(this->_anchor.x(), this->_anchor.y(), this->_anchor.z());
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

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
	glTranslatef(-this->_anchor.x(), -this->_anchor.y(), -this->_anchor.z());
}

Arm	*Arm::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
