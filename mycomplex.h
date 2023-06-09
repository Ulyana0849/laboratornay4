#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>
using namespace std;

class Complex
{
	double Re;
	double Im;
public:
	Complex(double aRe = 0, double aIm = 0);
	Complex(const Complex&);
	~Complex();
	void Set(double aRe, double aIm = 0);
	operator double();
	double abs();
	Complex operator+ (const Complex&);
	Complex operator- (const Complex&);
	Complex operator+ (const double&);
	Complex operator- (const double&);
	Complex operator* (const Complex&);
	Complex operator* (const double&);
	Complex operator/ (const double&);
    Complex& operator+= (const Complex&);
	Complex& operator-= (const Complex&);
    Complex& operator*= (const Complex&);
	Complex& operator+= (const double&);
	Complex& operator-= (const double&);
	Complex& operator*= (const double&);
	Complex& operator/= (const double&);
	Complex& operator= (const Complex&);
	Complex& operator= (const double&);

	friend istream& operator>> (istream&,Complex&) ;
	friend ostream& operator<< (ostream&, Complex & );
	friend Complex operator* (const double&, const Complex&);
	friend Complex operator- (const double&, const Complex&);
	friend Complex operator+ (const double&, const Complex&);
};
#endif
