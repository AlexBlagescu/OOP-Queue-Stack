#include "Stiva.h"
Stiva::Stiva(int l, float value_re, float value_im) :Vector(l, value_re, value_im)
{
}

bool Stiva::restricted_access()
{
	return true;
}

void Stiva::add_element(float re_value, float im_value)
{
	Complex* aux;
	aux = new Complex[get_dim()];
	for (int i = 0; i < get_dim(); i++) {
		aux[i].set_re(get_e_re(i));
		aux[i].set_im(get_e_im(i));
	}
	set_dim(get_dim() + 1);
	modif_v(get_dim());
	for (int i = 0; i < get_dim() - 1; i++) {
		set_e_re(aux[i].get_re(), i);
		set_e_im(aux[i].get_im(), i);
	}
	set_e_re(re_value, get_dim() - 1);
	set_e_im(im_value, get_dim() - 1);
	delete[]aux;
}

Complex Stiva::pop_element()
{
	if (get_dim() > 0) {

		Complex rez, * aux;
		rez.set_re(get_e_re(get_dim() - 1));
		rez.set_im(get_e_im(get_dim() - 1));
		set_dim(get_dim() - 1);
		aux = new Complex[get_dim()];
		for (int i = 0; i < get_dim(); i++) {
			aux[i].set_re(get_e_re(i));
			aux[i].set_im(get_e_im(i));
		}
		modif_v(get_dim());
		for (int i = 0; i < get_dim(); i++) {
			set_e_re(aux[i].get_re(), i);
			set_e_im(aux[i].get_im(), i);
		}
		delete[]aux;
		return rez;
	}
	else {
		cout << "STIVA VIDA!";
		Complex st_eroare;
		st_eroare.set_re(1<<24);
		st_eroare.set_re(1<<24);
		return st_eroare;
	}
}
