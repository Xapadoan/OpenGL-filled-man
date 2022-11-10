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

Point	*Point::setX(GLfloat x)
{
	this->_x = x;
	return (this);
}

Point	*Point::setY(GLfloat y)
{
	this->_y = y;
	return (this);
}

Point	*Point::setZ(GLfloat z)
{
	this->_z = z;
	return (this);
}
