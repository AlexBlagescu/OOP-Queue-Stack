#pragma once
#include <iostream>
using namespace std;
class Complex {
private:
	float re, im;
public:
	Complex(float r = 0, float i = 0);
	void set_re(float value);
	void set_im(float value);
	Complex	get_element();
	float get_re() const;
	float get_im() const;
	friend ostream& operator<< (ostream& out, const Complex& Object);
	friend istream& operator>>(istream& in, Complex& Object);
};
