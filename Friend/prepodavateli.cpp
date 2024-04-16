#include "prepodavateli.h"
#include"predmeti.h"
#include<string>
#include<iostream>
using namespace std;
prepodavateli::prepodavateli(string fio)
{
	this->fio = fio;

}
void prepodavateli::VivodPrepod(string* massiv_predm, int a)
{

	cout << "Предметы преподавтеля: " << fio << " " << endl;
	for (int i = 0; i < a; i++)
	{
		cout << massiv_predm[i] << "; " << endl;
	}
}