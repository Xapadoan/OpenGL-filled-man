#include <GL/glut.h>
#include <iostream>

#include "StickMan.hh"

#define TITLE "Stick Man"
#define DANGLE 0.2f
#define MILLIS 15

GLfloat angle = 0.0f;
bool	dir = false;
StickMan	man;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	man.setYAngle(angle);
	man.render();
	glutSwapBuffers();

	angle += DANGLE;
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
	initGL();
	glutMainLoop();
	return (0);
}
