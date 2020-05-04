#include <GL/glut.h>
#include <high_score_library.h>

using namespace score;

void Display() 
{
	glutSwapBuffers();
}

void main(int argc, char** argv)
{
	Scores* _highScore[_sizeList];
	string namePlayer;
	int new_score;
	AddNewScore(_highScore[0], "Juli", 100);
	AddNewScore(_highScore[1], "Tomi", 200);
	AddNewScore(_highScore[2], "Elias", 300);
	AddNewScore(_highScore[3], "Simon", 80);
	AddNewScore(_highScore[4], "Fermin", 600);
	AddNewScore(_highScore[5], "Maxi", 400);
	AddNewScore(_highScore[6], "Juan Crzu", 250);
	AddNewScore(_highScore[7], "Iker", 220);
	AddNewScore(_highScore[8], "Lauti", 90);
	AddNewScore(_highScore[9], "Lucio", 120);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(480, 360);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Highscore");
	glutDisplayFunc(Display);
	glutMainLoop();

}
