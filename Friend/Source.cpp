#include<iostream>
#include<string>
#include"person.h"
#include"gruppa.h"
#include"predmeti.h"
#include<windows.h>
#include <ctime>

using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	person p1("������ ���� ", 2006, '�', 1.77, 80);
	person p2("������� ����", 2007, '�', 1.75, 70);
	person p3("������� �����", 2005, '�', 1.80, 85);

	gruppa g1("1����-923", 2023);
	gruppa g2("2�����-922", 2022);
	gruppa g3("2�����1022", 2022);
	gruppa g4("2�����1122", 2022);
	gruppa g5("2�����1222", 2022);
	gruppa g6("2�����1322", 2022);
	gruppa g7("3�����-921", 2021);

	int ig1 = g1.Kurs();
	int ig2 = g2.Kurs();
	int ig3 = g3.Kurs();
	int ig4 = g4.Kurs();
	int ig5 = g5.Kurs();
	int ig6 = g6.Kurs();
	int ig7 = g7.Kurs();

	predmeti pr1("����������", 4);
	predmeti pr2("������������ �������", 4);
	predmeti pr3("���� � ������� �������� ����������", 3);
	predmeti pr4("������ �������������� � ����������������", 5);
	predmeti pr5("���� ������", 4);
	predmeti pr6("����������� ���� � ���������������� ������������", 2);
	predmeti pr7("����������� � ������������", 4);
	predmeti pr8("���������� ��������", 2);
	predmeti pr9("�� 04.01.������� ��������", 6);
	predmeti pr10("�������� ���", 2);


	cout << "���� " << ig1 << " ";
	g1.add_pers(p2);
	cout << "���� " << ig2 << " ";
	g2.add_pers(p1);
	cout << "���� " << ig7 << " ";
	g7.add_pers(p3);
	pr1.dis_play(g1);

	pr1.dis_play(g2);
	pr1.dis_play(g3);
	pr1.dis_play(g4);
	pr1.dis_play(g5);
	pr1.dis_play(g6);


	prepodavateli prep1("���������� �. �.");
	string perp1_perecen[] = { pr1.Perec(), pr10.Perec() };
	prep1.VivodPrepod(perp1_perecen, 2);
	cout << endl; cout << endl; cout << endl;
	string perecen[] = { pr1.Perec(), pr2.Perec(), pr3.Perec(), pr4.Perec(), pr5.Perec(), pr6.Perec(),
	pr7.Perec(),  pr8.Perec(), pr9.Perec() };
	int a1 = sizeof(perecen) / sizeof(perecen[0]);
	pr1.VivodPredmeti(perecen, a1);
}