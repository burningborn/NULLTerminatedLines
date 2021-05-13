#include<iostream>
#include<conio.h>
using namespace std;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
int Fibonacci(int f);

#define tab '\t'
//#define RECURSION_BASICS
//#define FACTORIAL
//#define POWER

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef RECURSION_BASICS
	system("CLS");
	cout << "Hello World\n";

	int floor;
	cout << "На каком Вы этаже?"; cin >> floor;
	elevator(floor);

	cout << "Еще разочек?(y/n):";
	if (_getch() == 'y')main();	//_getch() - ожидает нажатие клавиши, 
	//и возвращает ASCII-код нажатой клавиши  
#endif // RECURSION_BASICS

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << factorial(n) << endl;
#endif // FACTORIAL

#ifdef POWER
	int a;	//Основание степени
	int n;	//Показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
#endif // POWER

	int f;
	cout << "Введите предел для ряда Фибоначчи: "; cin >> f;
	cout << Fibonacci(f);

}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Привет подвал!" << endl;
		return;
	}
	static int counter = 0;
	cout << "Мы на " << floor << " этаже" << "\t";
	cout << counter++ << endl;;
	elevator(floor - 1);
	cout << "Мы на " << floor << " этаже" << "\t";
	cout << counter++ << endl;;
}

int factorial(int n)
{
	/*if (n == 0)return 1;
	return n * factorial(n - 1);*/

	return n == 0 ? 1 : n * factorial(n - 1);
}

double power(double a, int n)
{
	/*if (n == 0)return 1;
	if(n>0)	return a * power(a, n - 1);
	if (n < 0)return 1 / a * power(a, n + 1);*/

	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}

int Fibonacci(int f)
{
	int sum;
	if (f == 0)return 0;
	if (f == 1 || f == 2)return 1;
	return sum = Fibonacci(f - 1) + Fibonacci(f - 2);
	cout << sum << "\t";
}