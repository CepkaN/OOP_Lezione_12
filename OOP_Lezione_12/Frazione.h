#pragma once
#include<iostream>

class Frazione {
private:
	int _numeratore;
	int _denominatore;
public:
	explicit Frazione(int numer, int denom);
	~Frazione(){}
	void ShowCifre();
	void GetNumer(int numer);
	void GetDenom(int denom);
	int SetNumer();
	int SetDenom();
	Frazione operator+();
	Frazione operator-();
	Frazione operator++();
	Frazione operator++(int);
	Frazione operator--();
	Frazione operator--(int);
	int NumFra();
	int DenFra();
	int NormFra();
	Frazione InversoFra();
};
