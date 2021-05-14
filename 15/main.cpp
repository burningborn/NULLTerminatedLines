#include<iostream>
#include<conio.h>
using namespace std;

#define TAB "\t"
#define VERTICAL_SHIFT "\n\n\n\n"
#define GORIZONTAL_SHIFT "\t\t\t\t\t\t"

void PrintField(string field[]);
void Chek(string field[]);
void Move(string field[]);
void DownArrow(string field[]);
void LeftArrow(string field[]);
void RightArrow(string field[]);
void UpArrow(string field[]);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 16;
	string field[n] = { " 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10","11","12","13","14","15","  " };
	//string field[n] = { "13","14","  ","15"," 9","10","11","12"," 5"," 6"," 7"," 8"," 1"," 2"," 3"," 4" };

	PrintField(field);
	cout << "Ещё разочек? (y/n): " << endl;
	if (_getch() == 'y')main();
}


void PrintField(string field[])
{
	system("CLS");

	//cout << "\n\t\t" << " Для управления используйте NumPad: " << " 2  -  Up " << " 4  -  Left " << " 6  -  Right " << " 8  -  Down \n";

	cout << VERTICAL_SHIFT;
	for (int i = 12; i >= 0; i -= 4)
	{
		cout << GORIZONTAL_SHIFT;
		cout << " ";
		for (int j = 0; j < 4; j++)
		{
			cout << field[i + j];
			if (j != 3)cout << " | ";
		}
		cout << endl;
		if (i != 0) cout << GORIZONTAL_SHIFT << "---- ---- ---- ----";
		cout << endl;
	}
	Chek(field);
}

void Chek(string field[])
{
	bool game_over = false;

	if (field[12] == " 1" && field[13] == " 2" && field[14] == " 3" && field[15] == " 4" &&
		field[8] == " 5" && field[9] == " 6" && field[10] == " 7" && field[11] == " 8" &&
		field[4] == " 9" && field[5] == "10" && field[6] == "11" && field[7] == "12" &&
		field[0] == "13" && field[1] == "14" && field[2] == "15" && field[3] == "  "
		)game_over = true;


	if (game_over)
	{
		cout << " Поздравляем! Вы справились с задачей! " << endl;
		return;
	}

	Move(field);
}

void Move(string field[])
{
	char key;  //Ожидает нажатие клавиши и возвращает
	do
	{
		key = _getch();
		if (key == 27)return;
		if (key != 80 && key != 75 && key != 77 && key != 72) cout; //<< "Вы используете не те клавиши!\n"

	} while (key != 80 && key != 75 && key != 77 && key != 72);

	switch (key)
	{
	case 80:
		DownArrow(field);
		break;
	case 75:
		LeftArrow(field);
		break;
	case 77:
		RightArrow(field);
		break;
	case 72:
		UpArrow(field);
		break;
	}
}

void DownArrow(string field[])
{
	int size = 16;
	for (int i = 0; i < size; i++)
	{
		if (field[i] == "  ")
		{
			if (i != 12 && i != 13 && i != 14 && i != 15)
			{
				swap(field[i], field[i + 4]);
				break;
			}
			else
			{
				cout << "\a";
				break;
			}
		}
	}
	PrintField(field);
}
void LeftArrow(string field[])
{
	int size = 16;
	for (int i = 0; i < size; i++)
	{
		if (field[i] == "  ")
		{
			if (i != 3 && i != 7 && i != 11 && i != 15)
			{
				swap(field[i], field[i + 1]);
				break;
			}
			else
			{
				cout << "\a";
				break;
			}
		}
	}
	PrintField(field);
}

void RightArrow(string field[])
{
	int size = 16;
	for (int i = 0; i < size; i++)
	{
		if (field[i] == "  ")
		{
			if (i != 0 && i != 4 && i != 8 && i != 12)
			{
				swap(field[i], field[i - 1]);
				break;
			}
			else
			{
				cout << "\a";
				break;
			}
		}
	}
	PrintField(field);
}

void UpArrow(string field[])
{
	int size = 16;
	for (int i = 0; i < size; i++)
	{
		if (field[i] == "  ")
		{
			if (i != 0 && i != 1 && i != 2 && i != 3)
			{
				swap(field[i], field[i - 4]);
				break;
			}
			else
			{
				cout << "\a";
				break;
			}
		}
	}
	PrintField(field);
}