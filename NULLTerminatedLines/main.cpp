#include<iostream>
#include<Windows.h>
using namespace std;
#define tab "\t"
void ASCII();
int StringLenght(char str[]); //Считает количество символов
void to_upper(char str[]); //Переводит строку в верхний регистр
void to_lower(char str[]); //Переводит строку в нижний регистр
void capitolize(char str[]); //Первую букву каждого слова в предложении делает заглавной
void shrink(char str[]); //Удаляет из строки все лишние пробелы

//bool is_polindrome(char str[]);//Определяет, является ли строка палиндромом
//bool is_int_number(char str[]);// Определяет, является ли строка целым числом. 
////Строка является целы числом, когда она состоит только из цифр.
//bool is_bin_number(char str[]);//Проверяет, является ли строка двоичным числом
//int bin_to_dec(char str[]);//Если строка - двоичное число, функция вернет его десятичное значение.
//? ? ? int_to_dec(int decimal);//Функция принимает десятичное число, и возвращает его двоичное значение.
//bool is_hex_number(char str[]);	//Проверяет, является ли функция шестнадцатеричным числом
//int  hex_to_dec(char str[]);	//Если строка - Шестнадцатеричное число, функция вернет его десятичное значение
//? ? ? dec_to_hex(int decimal);	//Функция принимает десятичное число, и возвращает его Шестнадцатеричное значение.
//
//bool is_mac_address(char str[]);//Проверяет, является ли строка MAC-адресом
//bool is_ip_address(char str[]);	//Проверяет, является ли строка IP-адресом

//Hardcore:
//Если строка - целое число, функция вернет его письменное значение кирицей.
//#define STRING_DECLARATION

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef STRING_DECLARATION
	//ASCI - символ с кодом 0 '\0'
	'H';//Символьная константа (типа char)
	"Hello";//Строковая константа 
	//char str[] = { 'H', 'e', 'l', 'l','o', 0 };
	//for (int i = 0; i < sizeof(str); i++) cout << str[i];
	char str[] = "Hello";
	cout << str << endl;
	cout << sizeof("Hello") << endl;
	cout << sizeof(double) << endl;
#endif // STRING_DECLARATION
	ASCII();
	cout << 'a' - 'A' << endl;
	cout << 'a' - 'A' << endl;
	const int n = 20;
	char str[n] = {};
	cout << " Введите строку: "; 
	//cin >> str1;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n);         //CP1251
	cout << "\n" << str << endl; //CP866
	cout << StringLenght(str) << endl;
	//to_upper(str);
	//cout << str << endl;
	to_lower(str);
	cout << str << endl;
	capitolize(str);
	cout << str << endl;
}

void ASCII()
{
	//int i = 0;
	for (int i = 0; i < 256; i++);
	{
		//cout << i << "\n" << (char)i << endl;
	}
}
int StringLenght(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
	/*
	-------------------------------------------------
	false - это 0
	true - всё что НЕ 0
	for(Counter; Condition; Expression)
	*/
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' ||
			str[i] >= 'а' && str[i] <= 'я')
			str[i] -= ' ';
	}
}

void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= 'А' && str[i] <= 'Я')
			str[i] += ' ';
	}
}

void capitolize(char str[])
{
	if (str[0] >= 'a' && str[0] <= 'z' || str[0] >= 'а' && str[0] <= 'я')str[0] -= 32;
	for (int i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я')
				str[i] -= 32;
		}
	}
}

void shrink(char str[])
{

}