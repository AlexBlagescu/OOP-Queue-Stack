#pragma once
#include "Complex.h"
class Vector
{
private:
	int dim;
	Complex* v;
public:
	Vector(int l, float value_re = 0, float value_im = 0);
	~Vector();
	void set_dim(int value);
	int get_dim() const;
	void set_e_re(float value, int i);
	void set_e_im(float value, int i);
	float get_e_re(int i) const;
	float get_e_im(int i) const;
	Complex get_el(int i) const;
	bool check_imaginary();
	Complex operator[](int i);
	virtual bool restricted_access();
	void modif_v(int value);
	friend ostream& operator<<(ostream& out, const Vector& Object);
};

