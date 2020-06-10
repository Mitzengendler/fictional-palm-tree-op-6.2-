#pragma once
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

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
	void sortMas();
	int search(T key);
};

template<class T>
inline Massive<T>::Massive(int n)
{
	this->numOfEll = n;
	srand(time(NULL));
	for (int i = 0; i < this->numOfEll; i++) {
		mas.push_back(rand() % 100);
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

template<class T>
inline void Massive<T>::sortMas()
{
	sort(mas.begin(), mas.end());
}

template<class T>
inline int Massive<T>::search(T key)
{
	int left = 0;
	int right = this->numOfEll - 1;
	int centr;
	while (mas[left] <= key && mas[right] >= key)
	{
		if (mas[right] == mas[left]) {
			break;
		}
		centr = left + ((key - mas[left]) * (right - left)) / (mas[right] - mas[left]);
		if (mas[centr] < key) {
			left = centr + 1;
		}
		else if (mas[centr] > key) {
			right = centr - 1;
		}
		else {
			return centr;
		}
	}
	if (mas[left] == key) {
		return left;
	}
	if (mas[right] == key) {
		return right;
	}
	return -9;
}