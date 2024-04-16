#include "gruppa.h"
#include"person.h"
#include <iostream>
#include <ctime>
using namespace std;
class person;
gruppa::gruppa(string gruppa1, int god_post)
{
	this->gruppa1 = gruppa1;
	this->god_post = god_post;
}
void gruppa::vivodi() { cout << "Ãðóïïà " << gruppa1 << endl; }
int gruppa::Kurs()
{
	time_t current_time;
	current_time = time(NULL);
	return   god_post = 1970 + current_time / 31537970 - god_post;
}
void gruppa::add_pers(person& t)
{
	cout << t.fio << " " << t.god << " " << gruppa1 << endl;
}