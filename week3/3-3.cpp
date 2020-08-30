//0028
#include<iostream>
using namespace std;

string teamName[4];
int score[4][4], totalScore[4];


void getName();
void getScore();
void processScore();
void ranking();

int main()
{
	getName();
	getScore();
	processScore();
	ranking();

	return 0;
}

void getName()
{
	for (int i=0;i<4;i++)
	{
		cin >> teamName[i];
	}
}

void getScore()
{
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			cin >> score[i][j];
		}
	}
}

void processScore()
{
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			if (i != j)
			{
				if (score[i][j] > score[j][i]) // i=0 j=2
				{
					totalScore[i] += 3;
				}
				else if (score[i][j] == score[j][i])
				{
					totalScore[i] += 1;
				}
		
			}
		}
	}
}

void ranking()
{
	for (int i=0;i<4;i++)
	{
		cout << teamName[i] << totalScore[i] << endl;
	}
}