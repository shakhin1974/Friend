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
	cout << "Предмет " << pred << " Кол-во часов " << chas << endl;
}
void predmeti::dis_play(gruppa& g) {
	cout << "Предмет: " << pred << " Группа " << g.gruppa1 << endl;
}
void predmeti::add_prep(prepodavateli& prep)
{
	cout << "Предмет: " << pred << " Преподаватель:  " << prep.fio << endl;
}
string predmeti::Perec()
{
	return pred = pred;
}
void predmeti::VivodPredmeti(string massiv[1000], int a)
{
	cout << "Предметы курса: " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << massiv[i] << "; " << endl;
	}
}