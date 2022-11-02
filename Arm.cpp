#include <GL/glut.h>
#include "Arm.hh"

Arm::Arm(bool side) : _side(side)
{
}

void	Arm::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 1.0f, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	if (this->_side == 1) {
		glVertex3f(0.25f, -0.1, 0.05);
		glVertex3f(0.25f, -0.1, -0.05);
		glVertex3f(0.35f, -0.1, 0.05);

		glVertex3f(0.35f, -0.1, 0.05);
		glVertex3f(0.25f, -0.1, -0.05);
		glVertex3f(0.35f, -0.1, -0.05);

		glVertex3f(0.25f, -0.1, -0.05);
		glVertex3f(0.25f, -0.1, 0.05);
		glVertex3f(0.25f, -1.0, 0.05);

		glVertex3f(0.25f, -1.0, 0.05);
		glVertex3f(0.25f, -0.1, -0.05);
		glVertex3f(0.25f, -1.0, -0.05);

		glVertex3f(0.35f, -0.1, -0.05);
		glVertex3f(0.35f, -0.1, 0.05);
		glVertex3f(0.35f, -1.0, 0.05);

		glVertex3f(0.35f, -1.0, 0.05);
		glVertex3f(0.35f, -0.1, -0.05);
		glVertex3f(0.35f, -1.0, -0.05);

		glVertex3f(0.25f, -0.1, 0.05);
		glVertex3f(0.35f, -0.1, 0.05);
		glVertex3f(0.25f, -1.0, 0.05);

		glVertex3f(0.35f, -0.1, 0.05);
		glVertex3f(0.25f, -1.0, 0.05);
		glVertex3f(0.35f, -1.0, 0.05);

		glVertex3f(0.25f, -0.1, -0.05);
		glVertex3f(0.35f, -0.1, -0.05);
		glVertex3f(0.25f, -1.0, -0.05);

		glVertex3f(0.35f, -0.1, -0.05);
		glVertex3f(0.25f, -1.0, -0.05);
		glVertex3f(0.35f, -1.0, -0.05);

		glVertex3f(0.25f, -1.0, 0.05);
		glVertex3f(0.25f, -1.0, -0.05);
		glVertex3f(0.35f, -1.0, 0.05);

		glVertex3f(0.35f, -1.0, 0.05);
		glVertex3f(0.25f, -1.0, -0.05);
		glVertex3f(0.35f, -1.0, -0.05);
	} else {
		glVertex3f(-0.25f, -0.1, 0.05);
		glVertex3f(-0.25f, -0.1, -0.05);
		glVertex3f(-0.35f, -0.1, 0.05);

		glVertex3f(-0.35f, -0.1, 0.05);
		glVertex3f(-0.25f, -0.1, -0.05);
		glVertex3f(-0.35f, -0.1, -0.05);

		glVertex3f(-0.25f, -1.0, 0.05);
		glVertex3f(-0.25f, -1.0, -0.05);
		glVertex3f(-0.35f, -1.0, 0.05);

		glVertex3f(-0.35f, -1.0, 0.05);
		glVertex3f(-0.25f, -1.0, -0.05);
		glVertex3f(-0.35f, -1.0, -0.05);

		glVertex3f(-0.25f, -0.1, -0.05);
		glVertex3f(-0.25f, -0.1, 0.05);
		glVertex3f(-0.25f, -1.0, 0.05);

		glVertex3f(-0.25f, -1.0, 0.05);
		glVertex3f(-0.25f, -0.1, -0.05);
		glVertex3f(-0.25f, -1.0, -0.05);

		glVertex3f(-0.35f, -0.1, -0.05);
		glVertex3f(-0.35f, -0.1, 0.05);
		glVertex3f(-0.35f, -1.0, 0.05);

		glVertex3f(-0.35f, -1.0, 0.05);
		glVertex3f(-0.35f, -0.1, -0.05);
		glVertex3f(-0.35f, -1.0, -0.05);

		glVertex3f(-0.25f, -0.1, -0.05);
		glVertex3f(-0.35f, -0.1, -0.05);
		glVertex3f(-0.25f, -1.0, -0.05);

		glVertex3f(-0.35f, -0.1, -0.05);
		glVertex3f(-0.25f, -1.0, -0.05);
		glVertex3f(-0.35f, -1.0, -0.05);

		glVertex3f(-0.25f, -0.1, 0.05);
		glVertex3f(-0.35f, -0.1, 0.05);
		glVertex3f(-0.25f, -1.0, 0.05);

		glVertex3f(-0.35f, -0.1, 0.05);
		glVertex3f(-0.25f, -1.0, 0.05);
		glVertex3f(-0.35f, -1.0, 0.05);
	}
	glEnd();
}

Arm	*Arm::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
