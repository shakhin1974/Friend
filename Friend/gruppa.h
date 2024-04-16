#pragma once
#include<iostream>
#include <ctime>
#include<string>
#include"person.h"
#include"predmeti.h"

using namespace std;
class person;
class predmeti;
class gruppa
{
	string gruppa1;
	int god_post;
public:
	gruppa(string, int);
	friend class predmeti;
	friend class prepodavateli;
	int Kurs();
	void vivodi();
	void add_pers(person& t);
};