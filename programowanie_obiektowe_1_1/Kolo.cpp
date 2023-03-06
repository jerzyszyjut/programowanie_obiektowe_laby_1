#define _USE_MATH_DEFINES
#include "Kolo.h"
#include <iostream>
#include <math.h>

using namespace std;

Kolo::Kolo(double r) : r(r) {
	cout << "Konstruktor Kola(" << r << ")" << endl;
}

double Kolo::GetR() const {
	return r;
}

void Kolo::SetR(double r) {
	this->r = r;
}

double Kolo::Obwod() {
	return 2 * M_PI * r;
}

double Kolo::Pole() {
	return M_PI * r * r;
}

void Kolo::Wypisz(std::ostream& out) const {
	out << "Kolo(" << r << ")" << endl;
}

Kolo::~Kolo() {
	cout << "Destruktor Kola(" << r << ")" << endl;
}
