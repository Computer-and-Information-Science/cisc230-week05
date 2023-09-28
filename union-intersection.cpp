#include <iostream>
#include <list>
#include <string>
using namespace std;

list<int> list_intersection(const list<int>& a, const list<int>& b);
list<int> list_union(const list<int>& a, const list<int>& b);

void print(const list<int>& a, const string& title);

int main () {
	list<int> list1 = { 3, 7, 11, 13, 16, 19, 21, 23, 29, 35 };
	list<int> list2 = { 2, 3, 9, 11, 14, 17, 19, 22, 26, 29, 35 };

	print(list1, "list1");
	print(list2, "list2");
	print(list_intersection(list1, list2), "intersection");
	print(list_union(list1, list2), "union");
}

list<int> list_intersection(const list<int>& a, const list<int>& b) {
	return list<int>();
}

list<int> list_union(const list<int>& a, const list<int>& b) {
	return list<int>();
}

void print(const list<int>& a, const string& title) {
	cout << title << ':';
	for (int n : a)
		cout << ' ' << n;
	cout << endl;
}