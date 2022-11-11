#include "Mouse.hh"

Mouse::Mouse()
{
}

int	Mouse::rightButtonState(void)
{
	return (this->_right_button_state);
}

Mouse	*Mouse::setRightButtonState(int state)
{
	if (state == GLUT_UP || state == GLUT_DOWN)
	{
		this->_right_button_state = state;
	}
	return (this);
}

Mouse	*Mouse::setX(int x)
{
	this->_x = x;
	return (this);
}

Mouse	*Mouse::setY(int y)
{
	this->_y = y;
	return (this);
}

int		Mouse::x(void)
{
	return (this->_x);
}

int		Mouse::y(void)
{
	return (this->_y);
}
