#pragma once
#pragma once
#include<string>
#include"gruppa.h"
using namespace std;
class gruppa;
class person
{
	string fio;
	int god;
	char pol;
	float rost;
	int ves;
public:
	person(string, int, char, float, int);
	void show();
	friend class gruppa;
};
