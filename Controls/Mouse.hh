#ifndef MOUSE_HH
#define MOUSE_HH

#include <GL/glut.h>

class Mouse
{
	public:
		Mouse();
		Mouse	*setRightButtonState(int state);
		int		rightButtonState(void);
		Mouse	*setX(int x);
		Mouse	*setY(int y);
		int		x(void);
		int		y(void);
	private:
		int _right_button_state = GLUT_UP;
		int	_x = 0;
		int	_y = 0;
};

#endif
