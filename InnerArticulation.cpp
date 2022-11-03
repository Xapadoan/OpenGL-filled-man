#include "InnerArticulation.hh"

InnerArticulation::InnerArticulation(Point pos, std::vector<GLfloat> max_dr, std::vector<GLfloat> min_dr) :
	_dx(pos.x()),
	_dy(pos.y()),
	_dz(pos.z()),
	_max_drx(max_dr[0]),
	_min_drx(min_dr[0]),
	_max_dry(max_dr[1]),
	_min_dry(min_dr[1]),
	_max_drz(max_dr[2]),
	_min_drz(min_dr[2])
{
}

GLfloat	InnerArticulation::drx(void)
{
	return (this->_drx);
}

GLfloat	InnerArticulation::dry(void)
{
	return (this->_dry);
}

GLfloat	InnerArticulation::drz(void)
{
	return (this->_drz);
}

GLfloat	InnerArticulation::dx(void)
{
	return (this->_dx);
}

GLfloat	InnerArticulation::dy(void)
{
	return (this->_dy);
}

GLfloat	InnerArticulation::dz(void)
{
	return (this->_dz);
}

InnerArticulation	*InnerArticulation::setDrx(GLfloat drx)
{
	if (drx <= this->_max_drx && drx >= this->_min_drx) {
		this->_drx = drx;
	}
	return (this);
}

InnerArticulation	*InnerArticulation::setDry(GLfloat dry)
{
	if (dry <= this->_max_dry && dry >= this->_min_dry) {
		this->_dry = dry;
	}
	return (this);
}

InnerArticulation	*InnerArticulation::setDrz(GLfloat drz)
{
	if (drz <= this->_max_drz && drz >= this->_min_drz) {
		this->_drz = drz;
	}
	return (this);
}
