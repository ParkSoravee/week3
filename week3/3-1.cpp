//0025
#include<iostream>
using namespace std;

string num1, num2;
int cNum1, cNum2;
char op;

void run();
void getVal();

int main2() {

	getVal();
	run();

	return 0;
}

void run() {
	if (num1.length() > num2.length()) {
		cNum1 = num1.length();
		cNum2 = num2.length();
	}
	else {
		cNum1 = num2.length();
		cNum2 = num1.length();
	}

	if (op == '*') {
		cout << "1";
		for (int i = 0; i < cNum1 + cNum2 - 2; i++) {
			cout << "0";
		}
	}

	else if (op == '+') {
		if (cNum1 == cNum2) {
			cout << "2";
			for (int i = 0; i < cNum2 - 1; i++) {
				cout << "0";
			}
		}
		else {
			cout << "1";

			for (int i = 0; i < cNum1 - cNum2 - 1; i++) {
				cout << "0";
			}
			cout << "1";
			for (int i = 0; i < cNum2 - 1; i++) {
				cout << "0";
			}
		}
	}
}

void getVal()
{
	cin >> num1 >> op >> num2;
}