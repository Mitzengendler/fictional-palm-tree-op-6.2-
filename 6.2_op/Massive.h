#pragma once
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template<class T>
class Massive
{
private:
	vector<T> mas;
	int numOfEll;
public:
	Massive(int n);
	~Massive();
	void showMas();
	//void fillTree();
};

template<class T>
inline Massive<T>::Massive(int n)
{
	this->numOfEll = n;
	srand(time(NULL));
	for (int i = 0; i < this->numOfEll; i++) {
		mas.push_back(rand() % 10 + 1);
		//mas.push_back(21.5);
	}

}

template<class T>
inline Massive<T>::~Massive()
{

}

template<class T>
inline void Massive<T>::showMas()
{
	for (int i = 0; i < this->mas.size(); i++) {
		cout << this->mas[i] << "  ";
	}
	cout << endl;
}
