#ifndef TORSO_HH
#define TORSO_HH

#include <GL/glut.h>

class Torso
{
	public:
		void	render(void);
		Torso	*setYAngle(GLfloat y);
	private:
		GLfloat _y_angle = 0.0f;
};

#endif
