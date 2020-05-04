#include "high_score_library.h"

namespace score
{
	void Clean(Scores _highScore[_sizeList])
	{
		for (int i = 0; i < _sizeList; i++)
		{
			_highScore[i].name = " ";
			_highScore[i].score = 0;
		}
	}

	void AddNewScore(Scores _highScore[_sizeList], string namePlayer, int new_score)
	{
		int aux = 0;
		int newDat = new_score;
		string auxString = "Default";
		string newName = namePlayer;


		for (int i = 0; i < _sizeList; i++)
		{
			if (newDat >= _highScore[i].score)
			{
				aux = _highScore[i].score;
				auxString = _highScore[i].name;

				_highScore[i].score = newDat;
				_highScore[i].name = newName;

				newDat = aux;
				newName = auxString;
			}
		}
	}

	void DeleteHalf(Scores _highScore[_sizeList], bool upperHalf)
	{
		int aux = 0;
		int newDat = 0;
		string auxString = " ";
		string newName = " ";

		int half = _sizeList / 2;

		if (upperHalf == true)
		{
			for (int i = 0; i < half; i++)
			{
				_highScore[i].name = " ";
				_highScore[i].score = 0;
			}

			for (int i = 0; i < _sizeList - 1; i++)
			{
				for (int i = 0; i < _sizeList - 1; i++)
				{
					if (_highScore[i + 1].score >= _highScore[i].score)
					{
						aux = _highScore[i + 1].score;
						auxString = _highScore[i + 1].name;

						_highScore[i + 1].score = _highScore[i].score;
						_highScore[i + 1].name = _highScore[i].name;

						_highScore[i].score = aux;
						_highScore[i].name = auxString;
					}
				}
			}
		}
		else
		{
			for (int i = half; i < _sizeList; i++)
			{
				_highScore[i].name = " ";
				_highScore[i].score = 0;
			}

			for (int i = 0; i < _sizeList - 1; i++)
			{
				for (int i = 0; i < _sizeList - 1; i++)
				{
					if (_highScore[i + 1].score >= _highScore[i].score)
					{
						aux = _highScore[i + 1].score;
						auxString = _highScore[i + 1].name;

						_highScore[i + 1].score = _highScore[i].score;
						_highScore[i + 1].name = _highScore[i].name;

						_highScore[i].score = aux;
						_highScore[i].name = auxString;
					}
				}
			}
		}
	}

	void DeleteSpecificPlayer(Scores _highScore[_sizeList], string playerToDelete)
	{
		int aux = 0;
		int newDat = 0;
		string auxString = " ";
		string newName = " ";

		int countPos = 0;

		bool foundPlayer = false;

		for (int i = 0; i < _sizeList; i++)
		{
			if (_highScore[i].name == playerToDelete)
			{
				_highScore[i].name = " ";
				_highScore[i].score = 0;

				countPos = i;

				foundPlayer = true;

				break;
			}
		}

		if (foundPlayer == true)
		{
			for (int i = countPos; i < _sizeList - 1; i++)
			{
				if (_highScore[i + 1].score > _highScore[i].score)
				{
					aux = _highScore[i + 1].score;
					auxString = _highScore[i + 1].name;

					_highScore[i + 1].score = _highScore[i].score;
					_highScore[i + 1].name = _highScore[i].name;

					_highScore[i].score = aux;
					_highScore[i].name = auxString;
				}
			}
		}
	}

	void ShowHighScore(Scores highScore[_sizeList])
	{
		for (int i = 0; i < _sizeList; i++)
		{
			cout << " " << i + 1 << " "<< highScore[i].name << " -- " << highScore[i].score << "\n"<< endl;
		}
	}
}