#ifndef HEAD_HH
#define HEAD_HH

#include <GL/glut.h>

class Head {
	public:
		void	render(void);
		Head	*setYAngle(GLfloat y);
		Head	*setXAngle(GLfloat x);
		Head	*setZAngle(GLfloat z);
	private:
		GLfloat _y_angle = 0.0f;
		GLfloat _x_angle = 0.0f;
		GLfloat _z_angle = 0.0f;
};

#endif
