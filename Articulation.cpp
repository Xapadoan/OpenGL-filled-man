#include "Articulation.hh"

Articulation::Articulation(RelativePoint &pos, GLfloat rx, GLfloat ry, GLfloat rz) :
	_pos(pos),
	_rx(rx),
	_ry(ry),
	_rz(rz)
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
