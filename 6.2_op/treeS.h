#pragma once
#include <iostream>

using namespace std;

template<class T>
struct treeS
{
	T data;
	treeS* right;
	treeS* left;

	treeS(T val) {
		this->data = val;
		this->right = nullptr;
		this->left = nullptr;
	}
};