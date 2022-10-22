#include <iostream>
#include <Windows.h>
using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2){

	if (arg2 == 0) throw DivideByZero;
	return arg1 / arg2;

}

void div(float& res, float arg1, float arg2) { res = internaldiv(arg1, arg2); }

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float r, a, b;
	while (true) {
		cin >> a;
		cin >> b;
		try {
			div(r, a, b);
			cout << "-> " << r << "\n\n";
		}
		catch (...) {
			cout << "“и жартуЇш?\n¬веденн€ даних нед≥йсне. ¬и не можете д≥лити на нуль.\n\n";
		}
	}
	return 0;

}
