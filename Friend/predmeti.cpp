#include "predmeti.h"
#include "gruppa.h"
#include"person.h"
#include"prepodavateli.h"
#include <iostream>
#include <ctime>
using namespace std;
class person;
class gruppa;
class prepodavateli;
predmeti::predmeti(string pred, int chas)
{
	this->pred = pred;
	this->chas = chas;
}
void predmeti::Vivod() {
	cout << "������� " << pred << " ���-�� ����� " << chas << endl;
}
void predmeti::dis_play(gruppa& g) {
	cout << "�������: " << pred << " ������ " << g.gruppa1 << endl;
}
void predmeti::add_prep(prepodavateli& prep)
{
	cout << "�������: " << pred << " �������������:  " << prep.fio << endl;
}
string predmeti::Perec()
{
	return pred = pred;
}
void predmeti::VivodPredmeti(string massiv[1000], int a)
{
	cout << "�������� �����: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << massiv[i] << "; " << endl;
	}
}