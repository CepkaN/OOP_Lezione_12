#include<iostream>
#include<vector>
#include"Frazione.h"

class MyClass {
private:
	std::vector<int> data;
	void intit() {
		for (size_t i = 0; i < data.capacity(); i++) {
			data.push_back(i + 1);
		}
	}
public:
	explicit MyClass(int a) {
		if (a >= 0) {
			data.reserve(a);
			this->intit();
		}
	}

	int operator+(const MyClass obj)const {
		int result{};
		for (size_t i = 0; i < obj.data.size(); i++) {
			result += obj.data[i];
		}
		for (size_t i = 0; i < this->data.size(); i++) {
			result += this->data[i];
		}
		return result;
	}
};

class Integer {
public:
	int units;
	Integer operator ++() { // не генерирует дополнительный расход памяти.
		units += 1;
		return *this;
	}
	Integer operator ++(int) { // постфиксная форма . В ручной перегрузке такие операторы расходуют память.
		Integer result;
		result.units = units;
		units += 1;
		return *this;
	}
	Integer operator --() {    
		units -= 1;
		return *this;
	}
	Integer operator --(int) {  // постфиксная форма
		Integer result;
		result.units = units;
		units -= 1;
		return *this;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");


	//MyClass a(10000);
	//MyClass b(20000);

	////std::cout << a + 1000;  // без explicit будет работать

	//std::cout << a + MyClass(1000);

	int num;
	num = 9;
	int r1 = num++;
	int r2 = --num;

	Integer a;
	a.units = 9;

	Integer r3(++a);
	Integer r4(--a);

	std::cout << r1 << '\n' << r2 << '\n';
	//std::cout << r3 << '\n';
	//std::cout << r4 << '\n';
	std::cout << "\n\n";

	Frazione fra1 (23, 56);
	Frazione fra2 (10, 45);
	Frazione fra3 (2, 02);
	Frazione fra4 (77, 07);
	fra1.ShowCifre();
	fra2.ShowCifre();
	fra3.ShowCifre();
	fra4.ShowCifre();
	fra1.operator+().ShowCifre();
	fra2.operator-().ShowCifre();
	fra3.operator++().ShowCifre();
	fra4.operator--().ShowCifre();
	
	fra3++.ShowCifre();
	fra4--.ShowCifre();

	std::cout << fra1.NumFra() << '\n';
	std::cout << fra2.DenFra() << '\n';
	std::cout << fra1.NormFra() << "\n\n";
	fra4.InversoFra().ShowCifre();





	


	return 0;
}