#include <GL/glut.h>
#include "Torso.hh"

Torso::Torso(GLfloat x, GLfloat y, GLfloat z) :
	_anchor(x, y, z)
{
}

void	Torso::render(void)
{
	glTranslatef(this->_anchor.x(), this->_anchor.y(), this->_anchor.z());
	glRotatef(this->_y_angle, 0.0f, 1.0f, 0.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);

	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);

	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.45f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);

	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);

	glVertex3f(-0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.55f, 0.05f);
	glVertex3f(-0.05f, 0.45f, 0.05f);

	glVertex3f(-0.05f, 0.45f, 0.05f);
	glVertex3f(-0.05f, 0.55f, -0.05f);
	glVertex3f(-0.05f, 0.45f, -0.05f);

	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.55f, 0.05f);
	glVertex3f(0.05f, 0.45f, 0.05f);

	glVertex3f(0.05f, 0.45f, 0.05f);
	glVertex3f(0.05f, 0.55f, -0.05f);
	glVertex3f(0.05f, 0.45f, -0.05f);

	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, 0.1f);

	glVertex3f(0.25f, -0.45f, 0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);

	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);

	glVertex3f(-0.25f, -0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, 0.1f);

	glVertex3f(-0.25f, 0.45f, 0.1f);
	glVertex3f(-0.25f, -0.45f, -0.1f);
	glVertex3f(-0.25f, 0.45f, -0.1f);

	glVertex3f(0.25f, -0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, 0.1f);

	glVertex3f(0.25f, 0.45f, 0.1f);
	glVertex3f(0.25f, -0.45f, -0.1f);
	glVertex3f(0.25f, 0.45f, -0.1f);
	glEnd();

}

Torso	*Torso::setYAngle(GLfloat y)
{
	this->_y_angle = y;
	return (this);
}
