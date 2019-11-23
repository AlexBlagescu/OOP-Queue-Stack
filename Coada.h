#pragma once
#include "Vector.h"
class Coada :
	public Vector
{
public:
	Coada(int l, float value_re = 0, float value_im=0);
	bool restricted_access();
	void insert_element(float value_re, float value_im);
	Complex extract_element();
private:
	using Vector::operator[];
};

