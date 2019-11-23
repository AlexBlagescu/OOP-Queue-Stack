#include "Vector.h"
#include <iostream>
using namespace std;
Vector::Vector(int l, float value_re, float value_im)
{
	dim = l;
	v = new Complex[dim];
	for (int i = 0; i < dim; i++) {
		v[i].set_re(value_re);
		v[i].set_im(value_im);
	}
}

Vector::~Vector()
{
	delete[]v; 
}

void Vector::set_dim(int value)
{
	dim = value;
}

int Vector::get_dim() const
{
	return dim;
}

void Vector::set_e_re(float value, int i)
{
	v[i].set_re(value);
}

void Vector::set_e_im(float value, int i)
{
	v[i].set_im(value);
}

float Vector::get_e_re(int i) const
{
	return v[i].get_re();
}

float Vector::get_e_im(int i) const
{
	return v[i].get_im();
}

Complex Vector::get_el(int i) const
{
	return v[i];
}

bool Vector::check_imaginary()
{
	for (int i = 0; i < get_dim(); i++) {
		if (get_e_re(i) != 0 || get_e_im(i) == 0) {
			return false;
		}
	}
	return true;
}

Complex Vector::operator[](int i)
{
	return get_el(i);
}

bool Vector::restricted_access()
{
	return false;
}

void Vector::modif_v(int value)
{
	v = new Complex[value];
}

ostream& operator<<(ostream& out, const Vector& Object)
{
	for (int i = 0; i < Object.get_dim(); i++) {
		out << "v[" << i << "]: " << Object.get_e_re(i) << ' ' << Object.get_e_im(i) << '\n';
	}
	return out;
}
