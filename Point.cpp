#include <GL/glut.h>
#include "Point.hh"

Point::Point(GLfloat x, GLfloat y, GLfloat z) :
	_x(x),
	_y(y),
	_z(z)
{
}

GLfloat	Point::x(void)
{
	return (this->_x);
}

GLfloat	Point::y(void)
{
	return (this->_y);
}

GLfloat	Point::z(void)
{
	return (this->_z);
}
