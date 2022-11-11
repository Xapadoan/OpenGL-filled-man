#include "main.hh"
#include <iostream>

bool			dir = false;
Man				man;
Map				map;
Camera		camera(man.position(), 0.0f, 0.0f, -7.0f);
Mouse			mouse;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();
	glTranslatef(camera.position().x(), camera.position().y(), camera.position().z());
	glTranslatef(camera.lookAt().x(), camera.lookAt().y(), camera.lookAt().z());
	glRotatef(camera.rx(), 1.0f, 0.0f, 0.0f);
	glRotatef(camera.ry(), 0.0f, 1.0f, 0.0f);
	glRotatef(camera.rz(), 0.0f, 0.0f, 1.0f);
	glTranslatef(-camera.lookAt().x(), -camera.lookAt().y(), -camera.lookAt().z());

	man.render();
	map.render();

	glutSwapBuffers();
}

void reshape(GLsizei width, GLsizei height)
{
	if (height == 0) height = 1;
	GLfloat aspect = (GLfloat)width / (GLfloat)height;
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

void timer (int millis) {
	glutPostRedisplay();
	glutTimerFunc(MILLIS, timer, 0);
}

void	initGL(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClearDepth(1.0f);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void	regularKeyFunc(unsigned char key, int x, int y)
{
	switch (key)
	{
		case ('w'):
			man.move(0.0f, 0.0f, 0.5f, camera);
			break;
		case ('s'):
			man.move(0.0f, 0.0f, -0.5f, camera);
			break;
		case ('d'):
			man.move(-0.5f, 0.0f, 0.0f, camera);
			break;
		case ('a'):
			man.move(0.5f, 0.0f, 0.0f, camera);
			break;
		default:
			break;
	}
}

void	specialKeyFunc(int key, int x, int y)
{
	switch(key)
	{
		case (GLUT_KEY_LEFT):
			man.setRy(man.ry() - 1.0f);
			break;
		case (GLUT_KEY_RIGHT):
			man.setRy(man.ry() + 1.0f);
			break;
		default:
			break;
	}
}

void	rotateCamera(int x, int y)
{
	camera.setRx(camera.rx() + y);
	camera.setRy(camera.ry() + x);
}

void	mouseMotionFunc(int x, int y)
{
	int	dx = mouse.x() - x;
	int	dy = mouse.y() - y;
	mouse.setX(x);
	mouse.setY(y);
	if (mouse.rightButtonState() == GLUT_DOWN)
	{
		rotateCamera(dx, dy);
	}
}

void	mouseFunc(int button, int state, int x, int y)
{
	switch (button)
	{
		case (GLUT_RIGHT_BUTTON):
			mouse.setRightButtonState(state);
			break;
		default:
			break;
	}
}

void	mousePassiveFunc(int x, int y)
{
	mouse.setX(x);
	mouse.setY(y);
}

int	main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(1250, 740);
	glutInitWindowPosition(0, 0);
	glutCreateWindow(TITLE);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(0, timer, 0);
	glutKeyboardFunc(regularKeyFunc);
	glutSpecialFunc(specialKeyFunc);
	glutMotionFunc(mouseMotionFunc);
	glutPassiveMotionFunc(mousePassiveFunc);
	glutMouseFunc(mouseFunc);
	initGL();
	glutMainLoop();
	return (0);
}
