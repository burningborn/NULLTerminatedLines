#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus"); 
	const int n = 256;
	char str[n]{};
	/*cout << "������� ������: "; cin.getline(str, n);
	cout << str << endl;
	cout << "������ ������: " << strlen(str) << endl;*/

	// ����������� �����
	//strcpy(destination_string, source_string)
	//destination_string (dst) - ������ ����������, ���� ��������
	//source_string (src) - ������ ��������,  ������ ��������

	char str2[n]{};
	strncpy(str2, str, 4);
	cout << "����� ������: " << str2 << endl;

	strcpy(str, "Hello");  //������������ ����� 
	strcat(str, " ");
	strcat(str, "World");  //������������ �����
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
