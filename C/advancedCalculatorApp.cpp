#include<iostream>
#include<cmath>
#include"main.h"

using namespace std;

void arithmetic() {
	int op = 0;
	float A = 0;
	float B = 0;

	cout << "Select opeartion\n";
	cout << "[1] Addition\n";
	cout << "[2] Substraction\n";
	cout << "[3] Product\n";
	cout << "[4] Division\n";

	cin >> op;
	cout << "Enter the number:";
	cin >> A;

	cout << "Enter second number:";
	cin >> B;

	cout << "Result: ";

	switch (op) {
	case 1:
		cout << (A + B);
		advancedCalculatorMain();
		break;
	case 2:
		cout << (A - B);
		advancedCalculatorMain();
		break;
	case 3:
		cout << (A * B);
		advancedCalculatorMain();
		break;
	case 4:
		cout << (A / B);
		advancedCalculatorMain();
		break;
	default:
		cout << "Invalid operation";
		advancedCalculatorMain();
		break;
	}
	cout << endl;
}

void trignometric() {
	int op = 0;
	float val = 0.0;
	cout << "Select\n";
	cout << "[1] Sine\n";
	cout << "[2] Cosine\n";
	cout << "Op: ";
	cin >> op;
	cout << "Enter value: ";
	cin >> val;
	if (op == 1) {
		cout << sin(val);
		advancedCalculatorMain();
	}
	else if (op == 2) {
		cout << cos(val);
		advancedCalculatorMain();
	}
	else {
		cout << "Invalid operation";
		advancedCalculatorMain();
	}
	cout << endl;
}

void exponential() {
	float base = 0.0;
	float eee = 0.0;

	cout << "Enter base:";
	cin >> base;
	cout << "Enter expnent: ";
	cin >> eee;
	cout << pow(base, eee) << endl;
	advancedCalculatorMain();
}

void logarithmic() {
	float value = 0.0;
	cout << "Enter the value to calculate the log(e): ";
	cin >> value;
	cout << log(value) << endl;
	advancedCalculatorMain();
}

int advancedCalculatorMain() {
	int choice;
	cout << "\nAdvanced Calculator\n";

	cout << "[1] Arithmetic\n";
	cout << "[2] Trignometric\n";
	cout << "[3] Exponential\n";
	cout << "[4] Logarithmic\n";
	cout << "[5] Return to Apps Menu\n";
	cout << "Your choice:";
	cin >> choice;

	switch (choice) {
	case 1:
		arithmetic();
		break;
	case 2:
		trignometric();
		break;
	case 3:
		exponential();
		break;
	case 4:
		logarithmic();
		break;
	case 5:
		appsMenu();
		break;
	default:
		cout << "Invalid Operation";
	}
	return 0;
}
