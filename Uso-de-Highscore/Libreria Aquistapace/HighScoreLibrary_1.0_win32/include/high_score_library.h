#ifndef HIGH_SCORE_H
#define HIGH_SCORE_H

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

namespace scoreNamespace
{
	const int _sizeList = 10;				// Tamaño total de la lista
	struct Scores							// Struc que determina la composicion del array
	{
		string name;						
		int score;							
	};										
	// Ej: Scores _highScore[_sizeList];


	void Clean(Scores _highScore[], int _pos);							// Limpia todas las posiciones del array
	void AddNewScore(Scores _highScore, int _sizeList, string namePlayer, int new_score);		// Añade un nuevo valor a la tabla, eliminando al numero menor (si tiene)
	void ShowHighScore(Scores _highScore, int _sizeList);					// Muestra toda la tabla por pantalla
	int ShowScore(Scores _highScore, int _sizeList);
	string ShowPlayer(Scores _highScore, int _sizeList);
}

#endif // !HIGH_SCORE_H
