#include<iostream>
using namespace std;
int N, strN;
string inputStr, str, ans;
bool haveAns = false;

void getStr();
void checkEach();

int main3()
{

	cin >> strN >> N;
	getStr();
	cout << ans;

	return 0;
}

void getStr()
{
	for (int i = 0; i < N; i++)
	{
		cin >> inputStr;
		if (i == 0)
		{
			str = inputStr;
			ans = str;
			continue;
		}
		if (haveAns == false)
		{
			checkEach();
			if (haveAns == true)
			{
				ans = str;
			}
			else
			{
				str = inputStr;
				ans = inputStr;
			}
		}
	}
}

void checkEach()
{
	int inCorrect = 0;
	for (int i = 0; i < strN; i++)
	{
		if (str[i] != inputStr[i])
		{
			inCorrect++;
		}
	}
	if (inCorrect >= 3)
	{
		haveAns = true;
	}

}