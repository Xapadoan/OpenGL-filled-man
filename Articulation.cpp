#include "Articulation.hh"
#include <iostream>

Articulation::Articulation(RelativePoint &pos, std::vector<GLfloat> max_r, std::vector<GLfloat> min_r) :
	_pos(pos),
	_max_rx(max_r[0]),
	_min_rx(min_r[0]),
	_max_ry(max_r[1]),
	_min_ry(min_r[1]),
	_max_rz(max_r[2]),
	_min_rz(min_r[2])
{
}

GLfloat	Articulation::rx(void)
{
	return (this->_rx);
}

GLfloat	Articulation::ry(void)
{
	return (this->_ry);
}

GLfloat	Articulation::rz(void)
{
	return (this->_rz);
}

GLfloat	Articulation::x(void)
{
	return (this->_pos.x());
}

GLfloat	Articulation::y(void)
{
	return (this->_pos.y());
}

GLfloat	Articulation::z(void)
{
	return (this->_pos.z());
}

Articulation	*Articulation::setRx(GLfloat rx)
{
	if (rx <= this->_max_rx && rx >= this->_min_rx) {
		this->_rx = rx;
	}
	return (this);
}

Articulation	*Articulation::setRy(GLfloat ry)
{
	if (ry <= this->_max_ry && ry >= this->_min_ry) {
		this->_ry = ry;
	}
	return (this);
}

Articulation	*Articulation::setRz(GLfloat rz)
{
	if (rz <= this->_max_rz && rz >= this->_min_rz) {
		this->_rz = rz;
	}
	return (this);
}
