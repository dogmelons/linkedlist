#include <iostream>
#include "linkedlist.h"
 
template<typename T>
LinkedList<T>::LinkedList() {
  	head = new node;
	tail = new node;
	
	head->prev = 0;
	head->next = tail;
	
	tail->next = 0;
	tail->prev = head;
		
	current = NULL;
	size = 0;
}
 
template<typename T>
LinkedList<T>::~LinkedList() {
	current = head->next;
	while(current->next != tail->next) {
		delete head->next;
		head->next = current->next;
		current = head->next;
	}
	delete head;
	delete tail;
}
 
template<typename T>
bool LinkedList<T>::isEmpty() {
	return head->next == NULL;
}
 
template<typename T>
void LinkedList<T>::insert(T data, unsigned int pos) {
	if!(pos <= m_size) {
		std::cout << "error: out of bounds";
		return;
	}
	nodePtr n = new node;
	current = head.next;
	unsigned int i = 0;
	while(i++<pos) {
		current = current->next;
	}
	n->next = current;		//rearrange links so n is inserted at specified position
	n->prev = current->prev;
	n->prev->next = n;
	current->prev = n;
 
	n->info = data;
	size++;
}
 
template<typename T>
void LinkedList<T>::remove(unsigned int pos) {
	if!(pos <= m_size) {
		std::cout << "error: out of bounds";
		return;
	}
	unsigned int i = 0;
	current = head->next;
	while(i++ < pos) {
		current = current->next;
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	delete current;
}
 
template<typename T>
void LinkedList<T>::print() {
	if(head->next == tail) {
		return;
	}
	current = head->next;
	while(current->next != tail->next) {
		std::cout << current->data << "\n";
		current = current->next;
	}
}
 
template<typename T>
unsigned int LinkedList<T>::size() {
	return m_size;
}

