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
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
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

		
	string palabra = ShowPlayer(_highScore, 0) + "    " + to_string(ShowScore(_highScore, 0));//ShowScore(_highScore, 0);
	string palabra1 = ShowPlayer(_highScore, 1);

	int len = palabra.size();
	int len1 = palabra1.size();
	char *texto = new char[len + 1];
	char *texto1 = new char[len1 + 1];
	std::copy(palabra.begin(), palabra.end(), texto);
	std::copy(palabra1.begin(), palabra1.end(), texto1);
	texto[len] = '\0'; 
	texto1[len1] = '\0';
	int w;
	int w1;
	w = glutBitmapLength(GLUT_BITMAP_8_BY_13, (unsigned char*)texto);
	w1 = glutBitmapLength(GLUT_BITMAP_8_BY_13, (unsigned char*)texto1);

	glRasterPos2i(0, 0);

	glColor3b(1., 0., 0.);

	int plen = strlen(texto);
	for (int i = 0; i < plen; i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, texto[i]);
	}
	glFlush();

	glRasterPos2i(0, 1);

	glColor3b(1., 0., 0.);
	int plen1 = strlen(texto1);
	for (int i = 0; i < plen1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, texto1[i]);
	}

	glutMainLoop();
}
