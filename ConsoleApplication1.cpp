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
	cout << "������� ���������� ���������: ";
	cin >> n;
	students *student;
	student = new students[n];
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "������ �" << i + 1 << ":\n";
		cout << "ID: ";
		cin >> student[i].id_student;
		cout << "���: ";
		scanf("%s", student[i].fio);
		cout << "ID ������: ";
		cin >> student[i].id_group;
		cout << "������ �� 1-�� ��������: ";
		cin >> student[i].p1;
		cout << "������ �� 2-�� ��������: ";
		cin >> student[i].p2;
		cout << "������ �� 3-�� ��������: ";
		cin >> student[i].p3;
	}
	system("cls");
	int answer;
	cout << "���������� ������:\n";
	cout << "1. ��������, ���������� ���������;\n";
	cout << "2. �������, � ��������� ������� ������;\n";
	cout << "3. ����� �������� ������;\n";
	cout << "4. ����� �������� �������;\n";
	cout << "5. ����� ��������� �������.\n";
	cout << "������� �������: ";
	cin >> answer;
	switch (answer)
	{
	    case 1:
		{
			system("cls");
			cout << "��������, ���������� ���������:\n";
			if (student[i].p1 >= 4 && student[i].p1 >= 4)
			break;
		}
		break;
		case 2:
		{
			system("cls");
			cout << "������� � ��������� ������� ������:\n";
			// ���
		}
		break;
		case 3:
		{
			system("cls");
			cout << "����� �������� ������:\n";
			// ���
		}
		break;
		case 4:
		{
			system("cls");
			cout << "����� �������� �������:\n";
			// ���
		}
		break;
		case 5:
		{
			system("cls");
			cout << "����� ��������� �������:\n";
			// ���
		}
		break;
		default:
		{
			system("cls");
			cout << "������ �����!\n";
		}
		break;
	}
	system("pause");
}
// ������� ��������� "��������". ������� ����� ��������� ��������: ID, ���, ID ������, ������� 1, ������� 2, ������� 3.
// ������� ������, ����������� ��������� ��������:
//  1. ��������, ���������� ���������;
//  2. ������� � ��������� ������� ������;
//  3. ����� �������� ������;
//  4. ����� �������� �������;
//  5. ����� ��������� �������.