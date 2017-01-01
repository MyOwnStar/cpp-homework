#pragma once

#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction();
	Fraction(int numeration, int denominator);
	~Fraction();


	void print() const;
	// irreducible view
	void simplify();
	// greatest common divisior
	int gcd(int a, int b);
};