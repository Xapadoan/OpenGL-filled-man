#ifndef MAIN_HH
#define MAIN_HH

#include <GL/glut.h>

#include "Map.hh"
#include "Man.hh"
#include "Camera.hh"
#include "Mouse.hh"
#include "Point.hh"

#define TITLE "Man"
#define MILLIS 15

void	display(void);
void	reshape(GLsizei width, GLsizei height);
void	timer(int millis);
void	initGL(void);
void	regularKeyFunc(unsigned char key, int x, int y);
void	specialKeyFunc(int key, int x, int y);

int		main(int argc, char **argv);

#endif
