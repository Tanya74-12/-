#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct students
{
	char fio[255];
	int id_student, id_group, p1, p2, p3;
};

void main()
{
	setlocale(LC_ALL, "Russian");
	int n,i;
	cout << "Введите количество студентов: ";
	cin >> n;
	students *student;
	student = new students[n];
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Запись №" << i + 1 << ":\n";
		cout << "ID: ";
		cin >> student[i].id_student;
		cout << "ФИО: ";
		scanf("%s", student[i].fio);
		cout << "ID группы: ";
		cin >> student[i].id_group;
		cout << "Оценка по 1-му предмету: ";
		cin >> student[i].p1;
		cout << "Оценка по 2-му предмету: ";
		cin >> student[i].p2;
		cout << "Оценка по 3-му предмету: ";
		cin >> student[i].p3;
	}
	system("cls");
	int answer;
	cout << "Подведение итогов:\n";
	cout << "1. Студенты, получающие стипендию;\n";
	cout << "2. Студент, с наивысшим средним баллом;\n";
	cout << "3. Самая успешная группа;\n";
	cout << "4. Самый успешный студент;\n";
	cout << "5. Самый отстающий студент.\n";
	cout << "Введите команду: ";
	cin >> answer;
	switch (answer)
	{
	    case 1:
		{
			system("cls");
			cout << "Студенты, получающие стипендию:\n";
			if (student[i].p1 >= 4 && student[i].p1 >= 4)
			break;
		}
		break;
		case 2:
		{
			system("cls");
			cout << "Студент с наивысшим средним баллом:\n";
			// Код
		}
		break;
		case 3:
		{
			system("cls");
			cout << "Самая успешная группа:\n";
			// Код
		}
		break;
		case 4:
		{
			system("cls");
			cout << "Самый успешный студент:\n";
			// Код
		}
		break;
		case 5:
		{
			system("cls");
			cout << "Самый отстающий студент:\n";
			// Код
		}
		break;
		default:
		{
			system("cls");
			cout << "Ошибка ввода!\n";
		}
		break;
	}
	system("pause");
}
// Создать структуру "Студенты". Студент имеет следующие атрибуты: ID, ФИО, ID группы, предмет 1, предмет 2, предмет 3.
// Вывести записи, принимающие следующие значения:
//  1. Студенты, получающие стипендию;
//  2. Студент с наивысшим средним баллом;
//  3. Самая успешная группа;
//  4. Самый успешный студент;
//  5. Самый отстающий студент.