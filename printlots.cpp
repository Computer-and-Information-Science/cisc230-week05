#include <iostream>
#include <list>
using namespace std;

void printlots (const list<int>& l, const list<int>& p);

int main () {
	list<int> l = { 3, 7, 11, 13, 16, 19, 21, 23, 29, 35 };
	list<int> p = { 3, 5, 6, 9, 11 };

	printlots(l, p);
}

void printlots (const list<int>& l, const list<int>& p) {

}