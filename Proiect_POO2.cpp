#include <iostream>
#include "Complex.h"
#include "Vector.h"
#include "Coada.h"
#include "Stiva.h"
using namespace std;
int phase1() {
	int tasta;
	cout << "Pentru a introduce un element in coada introduceti tasta 1\n";
	cout << "Pentru a introduce un element in stiva introduceti tata 2\n";
	cout << "Pentru a sterge un element din coada introduceti tasta 3\n";
	cout << "Pentru a sterge un element din stiva introduceti tasta 4\n";
	cout << "Pentru a afisa coada introduceti tasta 5\n";
	cout << "Pentru a afisa stiva introduceti tasta 6\n";
	cout << "Pentru a termina programul introduceti orice tasta in afara de cele mentionate mai sus\n\n";
	cout << "Introduceti o tasta: ";
	cin >> tasta;
	return tasta;
}
int main() {
	Coada A(1, 0, 0);
	Stiva B(1, 0, 0);
	while (1) {
		int t = phase1();
		switch (t) {
		case 1: {
			Complex element;
			cout << "Introduceti elementul care se va adauga in coada:\n";
			cin >> element;
			A.insert_element(element.get_re(), element.get_im());
			break;
		}
		case 2: {
			Complex element;
			cout << "Introduceti elementul care se va adauga in stiva:\n";
			cin >> element;
			B.add_element(element.get_re(), element.get_im());
			break;
		}
		case 3: {
			cout << "Elementul eliminat din coada este:\n";
			cout << A.extract_element();
			break;
		}
		case 4: {
			cout << "Elementul eliminat din stiva este:\n";
			cout << B.pop_element();
			break;
		}
		case 5: {
			cout << "Coada:\n";
			cout << A;
			break;
		}
		case 6: {
			cout << "Stiva:\n";
			cout << B;
			break;
		}
		default: {
			return 0;
		}
		}
		cout << "\n\n\n";
	}
	return 0;
}
