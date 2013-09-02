#include "linkedlist.h"
#include <iostream>

int main(int argc, char *argv[]) {
	LinkedList<int> list;

	std::cout << "is list empty: " << list.isEmpty();
	std::cout << "size: " << list.size();
	list.insert(5,0);
	list.insert(2,1);
	list.print();
	std::cout << "size: " << list.size();
	list.remove(1);
	list.print();
}