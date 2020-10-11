﻿// Lab_2_1.cpp
// Shcherbak Laura
// Лабораторна робота No 2.1
// Лінійні програми.
// Варіант 25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "a = "; 
	cin >> a;

	z1 = 1 - ((1 / 4) * sin(2 * a) * sin(2 * a)) + cos(2 * a);
	z2 = (cos(a) * cos(a)) * (1 + (cos(a) * cos(a)));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();

	return 0;
}
