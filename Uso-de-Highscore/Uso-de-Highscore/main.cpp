#include <GL/glut.h>
#include <high_score_library.h>

using namespace score;

void Display() 
{
	glutSwapBuffers();
}

void main(int argc, char** argv)
{
	AddNewScore(Scores _highScore[_sizeList], string namePlayer, int new_score);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(480, 360);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Highscore");
	glutDisplayFunc(Display);
	glutMainLoop();

}
