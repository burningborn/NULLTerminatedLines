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
bool is_polindrome(char str[]);//Определяет, является ли строка палиндромом
bool is_int_number(char str[]);// Определяет, является ли строка целым числом.Строка является целы числом, когда она состоит только из цифр. 
bool is_bin_number(char str[]);//Проверяет, является ли строка двоичным числом

int bin_to_dec(char str[]);//Если строка - двоичное число, функция вернет его десятичное значение.
int dec_to_bin(int decimal);//Функция принимает десятичное число, и возвращает его двоичное значение.

bool is_hex_number(char str[]);	//Проверяет, является ли функция шестнадцатеричным числом
int  hex_to_dec(char str[]);	//Если строка - Шестнадцатеричное число, функция вернет его десятичное значение

//? ? ? dec_to_hex(int decimal);	//Функция принимает десятичное число, и возвращает его Шестнадцатеричное значение.
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
	/*to_lower(str);
	cout << str << endl;
	capitolize(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;*/
	//is_polindrome(str);
	//----------------------------------------------------------------
	/*if(is_polindrome(str))
		cout << " Слово "<< str << " является полиндромом " << endl;
	else
		cout << " Слово "<< str << " не является полиндромом " << endl;*/
	//----------------------------------------------------------------
	/*if (is_int_number(str))
		cout << str << " является целым числом" << endl;
	else
		cout << str << " не является целым числом " << endl;*/
	//----------------------------------------------------------------
	/*if (is_bin_number(str))
		cout << "Число " << str << " является бинарным" << endl;
	else
		cout << "Число " << str << " не является бинарным" << endl;*/
	//----------------------------------------------------------------
	//cout << "Двоичное число: " << str << " в дестичном виде: " << bin_to_dec(str) << endl;
	//----------------------------------------------------------------
	/*int decimal = 0;
	cout << "Введите десятичное число: "; cin >> decimal;
	cout << "Десятичное число: " << str << " в двоичном виде: " << dec_to_bin(decimal) << endl;*/
	//----------------------------------------------------------------
	/*if (is_hex_number(str))
		cout << "Число " << str << " является шестнадцатеричным" << endl;
	else
		cout << "Число " << str << " не является шестнадцатеричным" << endl;*/

	cout << "Шестнадцатеричное число: " << str << " в дестичном виде: " << hex_to_dec(str) << endl;

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
	char temp[20]{};
	int count = 0;
	for (int i = 0; str[i]; i++)
	{	
		if (str[i] != ' ')
		{
			temp[count] = str[i];
			count++;
		}
		else if (str[i + 1] != ' ')
		{
			temp[count] = str[i];
			count++;
		}
	}
	for (int i = 0; str[i]; i++)
	{
		str[i] = temp[i];
	}
}
bool is_polindrome(char str[])
{
	int size = StringLenght(str) - 1;
	int i = 0;
	while (i < size)
	{
		if (str[i] == str[size])
		{
			i++, size--;
		}
		else
			return false;			
	}
	return true;
}
bool is_int_number(char str[])
{	
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' && str[i] > '9')
			return false;
	}
	return true;
}
bool is_bin_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1')
			return false;
	}
	return true;
}

int bin_to_dec(char str[])
{
	int size = StringLenght(str) - 1;
	int dec = 0;
	int degree = 1;
	while (size >= 0)
	{
		dec += (str[size] - 48) * degree;
		size--;
		degree *= 2;
	}
	return dec;
}
int dec_to_bin(int decimal)
{
	const int n = 20;
	char arr[n] = {};
	char reverse[n] = {};
	int uno;
	int i = 0;
	while (decimal > 0)
	{
		uno = decimal % 2;
		decimal /= 2;
		arr[i] = uno + 48;
		i++;
	}
	i--;
	int go = 0;
	for (;i >= 0;i--)
	{
		reverse[i] = arr[go];
		go++;
	}
	decimal = atoi(reverse);
	return decimal;
}

bool is_hex_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' && str[i] > '9' || str[i] >= 'A' && str[i] <= 'F')
			return false;
	}
	return true;
}
int  hex_to_dec(char str[])
{
	int size = StringLenght(str);
	int hex = 1;
	int dec = 0;
	while (--size >= 0)
	{
		if (str[size] >= '0' && str[size] <= '9')
		{
			dec += (str[size] - 48) * hex;
			hex *= 16;
		}
		else if (str[size] >= 'A' && str[size] <= 'F')
		{
			dec += (str[size] - 55) * hex;
			hex *= 16;
		}
		else
		{
			break;
		}
	}
	return dec;
}