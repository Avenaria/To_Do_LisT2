#include <iostream>
#include<string>
#include<Windows.h>

using namespace std;

#include <cstdlib>
#include <windows.h>
#include <iostream>
#include <string>
#include<fstream>
using namespace std;
struct list {
	char name[25];

	int priority[5];// приоретет 
	char description [256] ;/// описание 
}* plist;

struct date
{
	int dey;//день
	int manth;//месяц
	int year;//год
	int time_To_Do;// время исполнения. ?( или функция)
}*pdate;

void enter_list(list &plist) {
	int priority = 0;
	cout << "Введите Название задачи  ";
	cin >> plist.name;
	cout << "Крадкое описание задачи  ";
	cin >> plist.description;
	cout << "Приоритет задачи от 1 до 5; ";
	cin >> priority;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	int choice;
	list temp;
	string new_note;
	system("color 5E");
	do {
		cout << "\t\tСписок дел!\n";
		cout << "\tЧто вы хотетите предпринять? \n";
		cout << " 1 - Добавить задачу  \n";
		cout << " 2 - Удалить задачу  \n";
		cout << " 3 - Редактировать задачу  \n";
		cout << " 4 - Найти задачу  \n";
		cout << " 5 - Посмотреть весь список задач   \n";
		cout << " 6 - Выход    \n";
		cin >> choice;


		switch (choice)
		{

		case 1:
			enter_list(*plist);

			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			cout << "\a";
			cout << "Такого пункта нет в меню, читай внимательно!! " << endl;
			break;
		}
	} while (choice != 6);
	{
		cout << "Приятной работы ";
	}
}
