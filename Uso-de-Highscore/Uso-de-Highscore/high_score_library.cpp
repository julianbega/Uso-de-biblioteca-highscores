#include "high_score_library.h"

namespace scoreNamespace
{
	void Clear(Scores *_highScore)
	{
		for (int i = 0; i < _sizeList; i++)
		{
			_highScore->name[i] = "default";
			_highScore->score[i] = 1;
		}
	}

	void AddNewScore(Scores *_highScore, int _sizeList, string namePlayer, int new_score)
	{
		int aux = 0;
		int newDat = new_score;
		string auxString = "Default";
		string newName = namePlayer;


		for (int i = 0; i < _sizeList; i++)
		{
			if (newDat >= _highScore->score[i])
			{
				aux = _highScore->score[i];
				auxString = _highScore->name[i];

				_highScore->score[i] = newDat;
				_highScore->name[i] = newName;

				newDat = aux;
				newName = auxString;
			}
		}
	}

	/*void DeleteHalf(Scores _highScore[_sizeList], bool upperHalf)
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
			if (_highScore.name[i] == playerToDelete)
			{
				_highScore.name[i] = " ";
				_highScore.score[i] = 0;

				countPos = i;

				foundPlayer = true;

				break;
			}
		}

		if (foundPlayer == true)
		{
			for (int i = countPos; i < _sizeList - 1; i++)
			{
				if (_highScore.score[i + 1] > _highScore.score[i])
				{
					aux = _highScore.score[i + 1];
					auxString = _highScore.name[i + 1];

					_highScore.score[i + 1] = _highScore.score[i];
					_highScore.name[i + 1] = _highScore.name[i];

					_highScore.score[i] = aux;
					_highScore.name[i] = auxString;
				}
			}
		}
	}
	*/
	void ShowHighScore(Scores _highScore, int _sizeList)
	{
		for (int i = 0; i < _sizeList; i++)
		{
			cout << " " << i + 1 << " "<< _highScore.name[i] << " -- " << _highScore.score[i] << "\n"<< endl;
		}
	}

	int ShowScore(Scores _highScore, int _sizeList)
	{
		int selectedScore = _highScore.score[_sizeList];

		return selectedScore;
	}
	string ShowPlayer(Scores _highScore, int _sizeList)
	{
		string name = _highScore.name[_sizeList];
		return name;
	}
}