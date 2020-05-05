#include <GL/glut.h>
#include <GL/freeglut.h>
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
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(480, 360);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Highscore");
	glutDisplayFunc(Display);


	Scores _highScore;
	Clear(&_highScore);
	AddNewScore(&_highScore, _sizeList, "Juli", 100);
	AddNewScore(&_highScore, _sizeList, "Tomi", 200);
	AddNewScore(&_highScore, _sizeList, "Elias", 300);
	AddNewScore(&_highScore, _sizeList, "Simon", 80);
	AddNewScore(&_highScore, _sizeList, "Fermin ", 600);
	AddNewScore(&_highScore, _sizeList, "Maxi", 400);
	AddNewScore(&_highScore, _sizeList, "Juan Cruz", 250);
	AddNewScore(&_highScore, _sizeList, "Iker", 220);
	AddNewScore(&_highScore, _sizeList, "Lauti", 90);
	AddNewScore(&_highScore, _sizeList, "Lucio", 120);
	ShowHighScore(_highScore, _sizeList);

	string palabra = "HIGHSCORE \n";
	for (int i = 0; i < _sizeList; i++)
	{
		palabra = palabra + ShowPlayer(_highScore, i) + "    " + to_string(ShowScore(_highScore, i)) + "\n";
	}
	
	
	int len = palabra.size();
	
	char *texto = new char[len + 1];
	
	std::copy(palabra.begin(), palabra.end(), texto);
	
	texto[len] = '\0'; 
	
	int w;
	
	w = glutBitmapLength(GLUT_BITMAP_8_BY_13, (unsigned char*)texto);
	

	

	glRasterPos2f(-0.9, 0.9);
	glColor3b(1., 0., 0.);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)texto);
	glFinish();
	

	glutMainLoop();
}
