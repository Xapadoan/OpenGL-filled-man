#include <iostream>

#include "main.hh"

bool	dir = false;
Man	man;
Map				map;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	map.render();
	man.render();

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
	std::cout << "You Pressed: " << key << "\n";
	std::cout << "Mouse Location: (" << x << ", " << y << ")\n";
}

void	specialKeyFunc(int key, int x, int y)
{
	switch(key)
	{
		case (GLUT_KEY_LEFT):
			man.setRy(man.ry() - 0.2f);
			break;
		case (GLUT_KEY_RIGHT):
			man.setRy(man.ry() + 0.2f);
			break;
		default:
			break;
	}
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
	initGL();
	glutMainLoop();
	return (0);
}
