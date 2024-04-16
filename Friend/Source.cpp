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
	person p1("Иванов Иван ", 2006, 'М', 1.77, 80);
	person p2("Иванова Анна", 2007, 'Ж', 1.75, 70);
	person p3("Комаров Павел", 2005, 'М', 1.80, 85);

	gruppa g1("1ИСИП-923", 2023);
	gruppa g2("2ОИБАС-922", 2022);
	gruppa g3("2ОИБАС1022", 2022);
	gruppa g4("2ОИБАС1122", 2022);
	gruppa g5("2ОИБАС1222", 2022);
	gruppa g6("2ОИБАС1322", 2022);
	gruppa g7("3ОИБАС-921", 2021);

	int ig1 = g1.Kurs();
	int ig2 = g2.Kurs();
	int ig3 = g3.Kurs();
	int ig4 = g4.Kurs();
	int ig5 = g5.Kurs();
	int ig6 = g6.Kurs();
	int ig7 = g7.Kurs();

	predmeti pr1("Математика", 4);
	predmeti pr2("Операционные системы", 4);
	predmeti pr3("Сети и системы передачи информации", 3);
	predmeti pr4("Основы алгоритмизации и программирования", 5);
	predmeti pr5("Базы данных", 4);
	predmeti pr6("Иностранный язык в профессиональной деятельности", 2);
	predmeti pr7("Электроника и схемотехника", 4);
	predmeti pr8("Физическая культура", 2);
	predmeti pr9("УП 04.01.Учебная практика", 6);
	predmeti pr10("Классный час", 2);


	cout << "Курс " << ig1 << " ";
	g1.add_pers(p2);
	cout << "Курс " << ig2 << " ";
	g2.add_pers(p1);
	cout << "Курс " << ig7 << " ";
	g7.add_pers(p3);
	pr1.dis_play(g1);

	pr1.dis_play(g2);
	pr1.dis_play(g3);
	pr1.dis_play(g4);
	pr1.dis_play(g5);
	pr1.dis_play(g6);


	prepodavateli prep1("Белоглазов А. И.");
	string perp1_perecen[] = { pr1.Perec(), pr10.Perec() };
	prep1.VivodPrepod(perp1_perecen, 2);
	cout << endl; cout << endl; cout << endl;
	string perecen[] = { pr1.Perec(), pr2.Perec(), pr3.Perec(), pr4.Perec(), pr5.Perec(), pr6.Perec(),
	pr7.Perec(),  pr8.Perec(), pr9.Perec() };
	int a1 = sizeof(perecen) / sizeof(perecen[0]);
	pr1.VivodPredmeti(perecen, a1);
}