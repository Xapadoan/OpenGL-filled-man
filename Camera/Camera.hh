#ifndef CAMERA_HH
#define CAMERA_HH

#include <GL/glut.h>

#include "Point.hh"

class Camera {
	public:
		Camera(Point &lookAt);
		Camera(Point &lookAt, GLfloat x, GLfloat y, GLfloat z);
		GLfloat	rx(void);
		GLfloat ry(void);
		GLfloat	rz(void);
		Point		&lookAt(void);
		Point		&position(void);
		Camera	*setRx(GLfloat rx);
		Camera	*setRy(GLfloat ry);
		Camera	*setRz(GLfloat rz);
		Camera	*move(GLfloat x, GLfloat y, GLfloat z);
		GLfloat	dz(void);
	private:
		Point		&_lookAt;
		Point		_position;
		GLfloat	_rx = 0.0f;
		GLfloat	_ry = 0.0f;
		GLfloat	_rz = 0.0f;
};

#endif
