#include "Coada.h"

Coada::Coada(int l, float value_re, float value_im) :  Vector(l, value_re, value_im)
{
}

bool Coada::restricted_access()
{
	return true;
}

void Coada::insert_element(float value_re, float value_im)
{
	Complex* aux;
	set_dim(get_dim() + 1);
	aux = new Complex[get_dim()];
	for (int i = 0; i < get_dim(); i++) {
		aux[i].set_re(get_e_re(i));
		aux[i].set_im(get_e_im(i));
	}
	modif_v(get_dim());
	set_e_re(value_re, get_dim() - 1);
	set_e_im(value_im, get_dim() - 1);
	for (int i = 0; i < get_dim() - 1; i++) {
		set_e_re(aux[i].get_re(), i);
		set_e_im(aux[i].get_im(), i);
	}
	delete[]aux;
}

Complex Coada::extract_element()
{
	if (get_dim() > 0) {

		Complex aux, * p;
		aux.set_re(get_e_re(0));
		aux.set_im(get_e_im(0));
		set_dim(get_dim() - 1);
		p = new Complex[get_dim()];
		for (int i = 0; i < get_dim(); i++) {
			p[i].set_re(get_e_re(i + 1));
			p[i].set_im(get_e_im(i + 1));
		}
		modif_v(get_dim());
		for (int i = 0; i < get_dim(); i++) {
			set_e_re(p[i].get_re(), i);
			set_e_im(p[i].get_im(), i);
		}
		delete[]p;
		return aux;
	}
	else {
		cout << "COADA VIDA!";
		Complex st_eroare;
		st_eroare.set_re(1 << 24);
		st_eroare.set_im(1 << 24);
		return st_eroare;
	}

}
