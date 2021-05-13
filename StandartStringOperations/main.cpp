#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus"); 
	const int n = 256;
	char str[n]{};
	/*cout << "введите строку: "; cin.getline(str, n);
	cout << str << endl;
	cout << "размер строки: " << strlen(str) << endl;*/

	// Копирование строк
	//strcpy(destination_string, source_string)
	//destination_string (dst) - строка получатель, куда копируем
	//source_string (src) - строка источник,  откуда копируем

	char str2[n]{};
	strncpy(str2, str, 4);
	cout << "Копия строки: " << str2 << endl;

	strcpy(str, "Hello");  //Коприрование строк 
	strcat(str, " ");
	strcat(str, "World");  //Конкатенация строк
	cout << str << endl;

	cout << strcmp("hello", "wold") << endl;
	const char* folders[] =
	{
		"addins"
		"download"
		"AppPatch"
		"debug"
		"assambly"
	};

}
