#include <iostream>
#include "Massive.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    Massive<long> a(n);
    a.sortMas();
    cout << "Array: ";
    a.showMas();
    int k;
    cout << "Enter element to find: ";
    cin >> k;
    cout << "Interpolation search index:" << a.search(k);
}
