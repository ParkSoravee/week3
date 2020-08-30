#include <iostream>
using namespace std;

int jellySize[3];

void getSize();
int chopJelly();

int main()
{
	getSize();
	int N = chopJelly();
	cout << N;
	return 0;
}

void getSize()
{
	for(int i=0;i<3;i++)
	{
		cin >> jellySize[i];
	}
}

int chopJelly()
{
	int N = 0;
	int i = 0;
	while (i != 3)
	{
		if (jellySize[i] > 1)
		{
			if (jellySize[i] % 2 > 0)
			{
				jellySize[i]--;
			}
			jellySize[i] /= 2;
			N++;
		}
		else
		{
			i++;
		}
	}
	return N;
}