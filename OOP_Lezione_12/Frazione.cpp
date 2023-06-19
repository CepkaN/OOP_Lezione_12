#include"Frazione.h"
#include<iostream>


	Frazione::Frazione(int numer, int denom) :_numeratore(numer), _denominatore(denom) {}

	void Frazione::ShowCifre() {
		std::cout << "Числитель   : " << _numeratore << '\n';
		std::cout << "Знаменатель : " << _denominatore << "\n\n";
	}
	void Frazione::GetNumer(int numer) {
		_numeratore = numer;
	}
	void Frazione::GetDenom(int denom) {
		_denominatore = denom;
	}
	int Frazione::SetNumer() {
		return _numeratore;
	}
	int Frazione::SetDenom() {
		return _denominatore;
	}
	Frazione Frazione::operator+() {
		return *this;
	}
	Frazione Frazione::operator-() {
		_numeratore *= (-1);
		return *this;
	}
	Frazione Frazione::operator++() {
		_numeratore += 10;
		return *this;
	}
	Frazione Frazione::operator++(int) {
		_numeratore += 2;
		return *this;
	}
	Frazione Frazione::operator--() {
		_numeratore -= 10;
		return *this;
	}
	Frazione Frazione::operator--(int) {
		_numeratore -= 2;
		return *this;
	}
	int Frazione::NumFra() {
		return _numeratore ;
	}
	int Frazione::DenFra() {
		 return _denominatore;
	}
	int Frazione::NormFra() {
		if (_denominatore > 50) {
			_numeratore += 1;
		}
		return _numeratore;
	}
	Frazione Frazione::InversoFra() {
		int x = _numeratore;
		_numeratore = _denominatore;
		_denominatore = x;
		return *this;
	}