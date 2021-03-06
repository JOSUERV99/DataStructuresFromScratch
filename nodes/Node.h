#define __N__

template <class T>
class Node {
public:
	// primitive values
	T value;
	Node<T> *next, *parent;
	
	// builders
	Node(T value): value(value), next(nullptr), parent(nullptr) {}
	Node(T value, Node *next): value(value), next(next), parent(nullptr) {}

	// methods
	T getValue() { return this->value; }
};
