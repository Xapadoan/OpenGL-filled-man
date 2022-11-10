#include <GL/glut.h>
#include "RelativePoint.hh"

RelativePoint::RelativePoint(Point &base, GLfloat dx, GLfloat dy, GLfloat dz) :
	_base(base),
	_dx(dx),
	_dy(dy),
	_dz(dz)
{
}

GLfloat	RelativePoint::x(void)
{
	return (this->_base.x() + this->_dx);
}

GLfloat	RelativePoint::y(void)
{
	return (this->_base.y() + this->_dy);
}

GLfloat	RelativePoint::z(void)
{
	return (this->_base.z() + this->_dz);
}
