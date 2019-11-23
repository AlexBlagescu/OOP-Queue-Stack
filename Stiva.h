#pragma once
#include "Vector.h"
class Stiva :
	public Vector
{
public:
	Stiva(int l, float value_re=0, float value_im=0);
	bool restricted_access();
	void add_element(float re_value, float im_value);
	Complex pop_element();
private:
	using Vector::operator[];
};

