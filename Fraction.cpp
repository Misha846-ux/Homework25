#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int new_numerator, int new_denominator) {
	numerator = new_numerator;
	denominator = new_denominator;
}

void Fraction::setNumerator(int new_numerator) {
	numerator = new_numerator;
}

void Fraction::setDenominator(int new_denominator) {
	denominator = new_denominator;
}

void Fraction::multiplicationFraction(Fraction& factor) {
	numerator *= factor.numerator;
	denominator *= factor.denominator;
}

Fraction Fraction::operator*(Fraction& factor) {
	return { numerator * factor.numerator, denominator * factor.denominator };
}

void Fraction::divisionFraction(Fraction& factor) {
	numerator *= factor.denominator;
	denominator *= factor.numerator;
}

Fraction Fraction::operator/(Fraction& factor) {
	return { numerator * factor.denominator, denominator * factor.numerator };
}

void Fraction::addFraction(Fraction& term) {
	int cell = denominator;
	numerator *= term.denominator;
	denominator *= term.denominator;
	numerator += term.numerator * cell;
}

Fraction Fraction::operator+(Fraction& term) {
	int cell = (numerator*term.denominator)+(term.numerator*denominator);
	return { cell,denominator * term.denominator };
}

void Fraction::minusFraction(Fraction& term) {
	int cell = denominator;
	numerator *= term.denominator;
	denominator *= term.denominator;
	numerator -= term.numerator * cell;
}

Fraction Fraction::operator-(Fraction& term) {
	int cell = (numerator * term.denominator) - (term.numerator * denominator);
	return { cell,denominator * term.denominator };
}

float Fraction::getNumerator() {
	return numerator;
}

float Fraction::getDenominator() {
	return denominator;
}

void Fraction::showFraction() {
	cout << numerator << '/' << denominator << endl;
}