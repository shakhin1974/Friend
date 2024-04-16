#pragma once
#include<string>
#include<iostream>
#include"gruppa.h"
#include"person.h"
#include"prepodavateli.h"
using namespace std;
class gruppa;
class person;
class prepodavateli;
class predmeti
{
	string pred;
	int chas;
public:
	predmeti(string, int);
	friend class gruppa;
	friend class person;
	friend class prepodavateli;
	void dis_play(gruppa& g);
	void add_prep(prepodavateli& prep);
	void Vivod();
	string Perec();
	void VivodPredmeti(string massiv[1000], int);
};