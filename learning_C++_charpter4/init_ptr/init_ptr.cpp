#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main() {
	int higgens = 5;
	int *pt = &higgens;
	cout << "Values of higgens = " << higgens
		<< ";Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< ";Value of pt = " << pt << endl;
	return 0;
}