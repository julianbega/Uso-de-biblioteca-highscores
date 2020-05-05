#include <GL/glut.h>
#include <high_score_library.h>
#include<iostream>
#include <string.h>
#include <string>

using namespace scoreNamespace;
using namespace std;

void Display() 
{
	glutSwapBuffers();
}

void main(int argc, char** argv)
{
	Scores _highScore;
	Clear(&_highScore);
	AddNewScore(&_highScore, _sizeList, "Juli", 100);
	AddNewScore(&_highScore, _sizeList, "Tomi", 200);
	AddNewScore(&_highScore, _sizeList, "Elias", 300);
	AddNewScore(&_highScore, _sizeList, "Simon", 80);
	AddNewScore(&_highScore, _sizeList, "Fermin", 600);
	AddNewScore(&_highScore, _sizeList, "Maxi", 400);
	AddNewScore(&_highScore, _sizeList, "Juan Crzu", 250);
	AddNewScore(&_highScore, _sizeList, "Iker", 220);
	AddNewScore(&_highScore, _sizeList, "Lauti", 90);
	AddNewScore(&_highScore, _sizeList, "Lucio", 120);
	ShowHighScore(_highScore, _sizeList);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(480, 360);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Highscore");
	glutDisplayFunc(Display);
	glutMainLoop();

}
