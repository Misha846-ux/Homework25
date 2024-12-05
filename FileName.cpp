#include <iostream>
#include "Fraction.h"
using namespace std;

ostream& operator<<(ostream& out, Fraction& obj)
{
	out << obj.getNumerator() << "/" << obj.getDenominator();
	return out;
}

int main()
{
	Fraction a1 = { 1,5 };
	cout << a1.getNumerator() << "/" << a1.getDenominator() << endl;
	a1.showFraction();
	a1.setNumerator(10);
	a1.setDenominator(20);
	a1.showFraction();
	Fraction d1 = { 5,2 };
	a1.multiplicationFraction(d1);
	a1.showFraction();
	a1.divisionFraction(d1);
	a1.showFraction();
	Fraction c1 = { 3,4 };
	c1.addFraction(d1);
	c1.showFraction();
	d1.showFraction();
	Fraction c2 = { 10,1 };
	c2.minusFraction(d1);
	c2.showFraction();
	Fraction f1 = { 5,10 };
	Fraction f2 = { 2,15 };
	Fraction sh = f1 + f2;
	Fraction sh2 = f1 - f2;
	Fraction sh3 = f1 * f2;
	Fraction sh4 = f1 / f2;
	cout << sh<<endl;
	cout << sh2 << endl;
	cout << sh3 << endl;
	cout << sh4 << endl;

	
	return 0;
}