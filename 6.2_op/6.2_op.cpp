#include <iostream>
#include "Massive.h"
#include "treeS.h"

using namespace std;


int main()
{
    cout << "Hello World!\n";
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    Massive<int> a(n);
    a.showMas();
    treeS<int> h(1);
    
}
