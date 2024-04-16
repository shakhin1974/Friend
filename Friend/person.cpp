#include "person.h"
#include"gruppa.h"
#include<string>
#include<iostream>
using namespace std;
person::person(string fio, int god, char pol, float rost, int ves) {
	this->fio = fio;
	this->god = god;
	this->pol = pol;
	this->rost = rost;
	this->ves = ves;
}
void person::show() {
	cout << "Фаилия и имя: "
		<< fio << endl << "Год рождения: " << god << endl << "Пол: " << pol
		<< endl << "Рост: " << rost << endl << "Вес: " << ves << endl;
}