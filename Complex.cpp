#include "Complex.h"

Complex::Complex(float r, float i)
{
	re = r;
	im = i;
}

void Complex::set_re(float value)
{
	re = value;
}

void Complex::set_im(float value)
{
	im = value;
}

Complex Complex::get_element()
{
	return (*this);
}

float Complex::get_re() const
{
	return re;
}

float Complex::get_im() const
{
	return im;
}

ostream& operator<<(ostream& out, const Complex& Object)
{
	out << "Partea reala: " << Object.get_re() << '\n';
	out << "Partea imaginara:" << Object.get_im() << '\n';
	return out;
}

istream& operator>>(istream& in, Complex& Object)
{
	cout << "Introduceti partea reala: ";
	in >> Object.re;
	cout << "Introduceti partea imaginara: ";
	in >> Object.im;
	return in;


}
