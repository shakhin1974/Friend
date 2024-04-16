#pragma once
#pragma once
#include<string>
#include"predmeti.h"
using namespace std;
class predmeti;
class prepodavateli
{
public:
	prepodavateli(string);
	friend class predmeti;
	
	void VivodPrepod(string* massiv_predm, int a);
private:
	string fio;

}; 

