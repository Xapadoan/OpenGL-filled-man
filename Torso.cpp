#include <GL/glut.h>
#include "Torso.hh"

void	Torso::render(void)
{
	glLoadIdentity();
	glTranslatef(0.0f, 1.0f, -7.0f);
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.05f, 0.0f, 0.05f);
	glVertex3f(-0.05f, 0.0f, 0.05f);
	glVertex3f(0.05f, 0.0f, -0.05f);

	glVertex3f(-0.05f, 0.0f, 0.05f);
	glVertex3f(0.05f, 0.0f, -0.05f);
	glVertex3f(-0.05f, 0.0f, -0.05f);

	glVertex3f(0.05f, 0.0f, 0.05f);
	glVertex3f(0.05f, -0.1f, 0.05f);
	glVertex3f(-0.05f, -0.1f, 0.05f);

	glVertex3f(0.05f, 0.0f, 0.05f);
	glVertex3f(-0.05f, -0.1f, 0.05f);
	glVertex3f(-0.05f, -0.0f, 0.05f);

	glVertex3f(0.05f, 0.0f, -0.05f);
	glVertex3f(0.05f, -0.1f, -0.05f);
	glVertex3f(-0.05f, -0.1f, -0.05f);

	glVertex3f(0.05f, 0.0f, -0.05f);
	glVertex3f(-0.05f, -0.1f, -0.05f);
	glVertex3f(-0.05f, 0.0f, -0.05f);

	glVertex3f(-0.05f, 0.0f, -0.05f);
	glVertex3f(-0.05f, 0.0f, 0.05f);
	glVertex3f(-0.05f, -0.1f, 0.05f);

	glVertex3f(-0.05f, -0.1f, 0.05f);
	glVertex3f(-0.05f, 0.0f, -0.05f);
	glVertex3f(-0.05f, -0.1f, -0.05f);

	glVertex3f(0.05f, 0.0f, -0.05f);
	glVertex3f(0.05f, 0.0f, 0.05f);
	glVertex3f(0.05f, -0.1f, 0.05f);

	glVertex3f(0.05f, -0.1f, 0.05f);
	glVertex3f(0.05f, 0.0f, -0.05f);
	glVertex3f(0.05f, -0.1f, -0.05f);

	glVertex3f(0.25f, -0.1f, 0.1f);
	glVertex3f(0.25f, -0.1f, -0.1f);
	glVertex3f(-0.25f, -0.1f, 0.1f);

	glVertex3f(-0.25f, -0.1f, 0.1f);
	glVertex3f(0.25f, -0.1f, -0.1f);
	glVertex3f(-0.25f, -0.1f, -0.1f);

	glVertex3f(-0.25f, -0.1f, 0.1f);
	glVertex3f(0.25f, -0.1f, 0.1f);
	glVertex3f(0.25f, -1.0f, 0.1f);

	glVertex3f(0.25f, -1.0f, 0.1f);
	glVertex3f(-0.25f, -0.1f, 0.1f);
	glVertex3f(-0.25f, -1.0f, 0.1f);

	glVertex3f(-0.25f, -0.1f, -0.1f);
	glVertex3f(0.25f, -0.1f, -0.1f);
	glVertex3f(0.25f, -1.0f, -0.1f);

	glVertex3f(0.25f, -1.0f, -0.1f);
	glVertex3f(-0.25f, -0.1f, -0.1f);
	glVertex3f(-0.25f, -1.0f, -0.1f);

	glVertex3f(-0.25f, -1.0f, 0.1f);
	glVertex3f(-0.25f, -1.0f, -0.1f);
	glVertex3f(-0.25f, -0.1f, 0.1f);

	glVertex3f(-0.25f, -0.1f, 0.1f);
	glVertex3f(-0.25f, -1.0f, -0.1f);
	glVertex3f(-0.25f, -0.1f, -0.1f);

	glVertex3f(0.25f, -1.0f, 0.1f);
	glVertex3f(0.25f, -1.0f, -0.1f);
	glVertex3f(0.25f, -0.1f, 0.1f);

	glVertex3f(0.25f, -0.1f, 0.1f);
	glVertex3f(0.25f, -1.0f, -0.1f);
	glVertex3f(0.25f, -0.1f, -0.1f);
	glEnd();

}

Torso	*Torso::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
