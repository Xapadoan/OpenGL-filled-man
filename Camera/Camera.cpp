#include "Camera.hh"

Camera::Camera(Point &lookAt) :
	_lookAt(lookAt),
	_position(0.0f, 0.0f, -7.0f)
{
}

Camera::Camera(Point &lookAt, GLfloat x, GLfloat y, GLfloat z) :
	_lookAt(lookAt),
	_position(x, y, z)
{
}

GLfloat	Camera::rx(void)
{
	return (this->_rx);
}

GLfloat Camera::ry(void)
{
	return (this->_ry);
}

GLfloat	Camera::rz(void)
{
	return (this->_rz);
}

Camera	*Camera::setRx(GLfloat rx)
{
	this->_rx = rx;
	return (this);
}

Camera	*Camera::setRy(GLfloat ry)
{
	this->_ry = ry;
	return (this);
}

Camera	*Camera::setRz(GLfloat rz)
{
	this->_rz = rz;
	return (this);
}

Point		&Camera::lookAt(void)
{
	return (this->_lookAt);
}

Point		&Camera::position(void)
{
	return (this->_position);
}

Camera	*Camera::move(GLfloat x, GLfloat y, GLfloat z)
{
	this->_position.setX(x + this->_position.x());
	this->_position.setY(y + this->_position.y());
	this->_position.setZ(z + this->_position.z());
	return (this);
}

