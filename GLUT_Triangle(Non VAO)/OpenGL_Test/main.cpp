#include "main.h"

void render() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(1.f, 0.f, 0.f);
	glVertex2f(	0.f,   0.5f);
	glColor3f(0.f, 1.f, 0.f);
	glVertex2f( 0.5f, -0.5f);
	glColor3f(0.f, 0.f, 1.f);
	glVertex2f(-0.5f, -0.5f);
	glEnd();

	glutSwapBuffers();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1024, 768);
	glutCreateWindow("OpenGL Test");
	glutDisplayFunc(render);

	glutMainLoop();

	return 0;	
}