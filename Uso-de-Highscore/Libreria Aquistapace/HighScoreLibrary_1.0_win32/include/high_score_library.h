#ifndef HIGH_SCORE_H
#define HIGH_SCORE_H

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

namespace scoreNamespace
{
	const int _sizeList = 10;				// Tamaño total de la lista
	struct Scores						// Struc que determina la composicion del array
	{
		string name[_sizeList];
		int score[_sizeList];
	};										
	// Ej: Scores _highScore[_sizeList];


	void Clear(Scores *_highScore);							// Limpia todas las posiciones del array
	void AddNewScore(Scores *_highScore, int _sizeList, string namePlayer, int new_score);		// Añade un nuevo valor a la tabla, eliminando al numero menor (si tiene)
	void ShowHighScore(Scores _highScore, int _sizeList);					// Muestra toda la tabla por pantalla
	int ShowScore(Scores _highScore, int pos);
	string ShowPlayer(Scores _highScore, int pos);
}

#endif // !HIGH_SCORE_H
