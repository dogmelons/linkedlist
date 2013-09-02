

template<typename T>
class LinkedList {
public: 

	LinkedList();
	~LinkedList();

	bool isEmpty();

	void insert(T data, unsigned int pos);

	void remove(unsigned int pos);

	void print();

	unsigned int size();

private: 
	typedef struct node {
		T info;
		node* next;
		node* prev;
	}*nodePtr;

	nodePtr head;
	nodePtr tail;
	nodePtr current;
	unsigned int m_size;

};
