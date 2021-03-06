#ifndef __S__
	#include "Stack.h"
#endif

template <class T>
int Stack<T>::size() {
	return length;
}

template <class T>
bool Stack<T>::isEmpty() {
	return length <= 0;
}

template <class T>
void Stack<T>::push(T value) {
	if (!begin) 
		begin = end = new Node<T>(value);
	else {
		end->next = new Node<T>(value);
		end->next->parent = end;
		end = end->next;
	}
	length++;
}

template <class T>	
void Stack<T>::pop() {
	if (!isEmpty()) {
		Node<T> *iter = end;

		if(begin == iter) 
			begin = end = nullptr;
		else  {
			end = end->parent;
			end->next = nullptr;
		}

		delete iter;
		length--;
	} else 
		exit(EXIT_FAILURE);
}

template <class T>	
T Stack<T>::top() {
	T retValue;
	if (!end)
		return retValue;
	else 
		return end->getValue();
}

template <class T>	
T Stack<T>::base() {
	T retValue;
	if (!begin)
		return retValue;
	else 
		return begin->getValue();
}
