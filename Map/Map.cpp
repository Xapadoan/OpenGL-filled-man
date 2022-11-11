#include "Map.hh"

Map::Map()
{
}

void renderTile()
{
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.2f);
	glVertex3f(0.2f, 0.0f, 0.2f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.2f);
	glEnd();
}

void	Map::render()
{
	int i = 0;

	glTranslatef(0.0f, -1.45f, 0.0f);

	glTranslatef(0.0f, 0.0f, -2.0f);
	while (i < 20) {
		if (i % 2) {
			glTranslatef(-1.8f, 0.0f, 0.0f);
		} else {
			glTranslatef(-1.6f, 0.0f, 0.0f);
		}
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		glTranslatef(0.4f, 0.0f, 0.0f);
		renderTile();
		if (i % 2) {
			glTranslatef(-1.8f, 0.0f, 0.0f);
		} else {
			glTranslatef(-2.0f, 0.0f, 0.0f);
		}

		glTranslatef(0.0f, 0.0f, 0.2f);
		i++;
	}
	glTranslatef(0.0f, 0.0f, -2.0f);

	glTranslatef(0.0f, 1.45f, 0.0f);

}
