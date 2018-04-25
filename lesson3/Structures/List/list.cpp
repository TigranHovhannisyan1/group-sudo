#include <iostream>
#include "list.h"

List::List()
    : firstPtr(0)
    , lastPtr(0)
    , _length(0) {}
List::List(const List & k) 
    :_length(0) {
        std::cout << "Coppy constructor\n";
        Node* tmp = k.firstPtr;
        addEnd(tmp->_data);
        do {
            tmp = tmp->nextPtr;
            addEnd(tmp->_data);
        } while(tmp != k.lastPtr);
}
List::~List(){
    while (firstPtr) {
        Node* tempPtr = firstPtr->nextPtr;
        delete firstPtr;
        firstPtr = tempPtr;
    }
}
void List::addFront(int value) {
    if (_length) {
        Node* tempPtr = firstPtr;
        firstPtr = new Node(value);
        firstPtr->nextPtr = tempPtr;
    } else {
        firstPtr = new Node(value);
        lastPtr = firstPtr;
    }
    ++_length;
}
void List::addEnd(int value) {
    if(firstPtr) {
        lastPtr->nextPtr = new Node(value);
        lastPtr = lastPtr->nextPtr;
    } else {
        firstPtr = new Node(value);
        lastPtr = firstPtr;
    }
    ++_length;
}
void List::insert(int value, unsigned int index) {
    if(index <= _length){
        if(index == 0) {
            addFront(value);
            return;
        } else if (index == _length) {
            addEnd(value);
            return;
        }
        Node* tempPtr = (Node*) shiftTo(index-1);
        Node* tmp = tempPtr->nextPtr;
        tempPtr->nextPtr = new Node(value);
        tempPtr = tempPtr->nextPtr;
        tempPtr->nextPtr = tmp;
        ++_length;
    } else {
        std::cout << "Error!! False index\n";
    }
}
void List::print() {
        Node* tempPtr = firstPtr;
    for (unsigned int i = 0; i < _length; ++i) {
        std::cout << tempPtr->_data << ' ';
        tempPtr = tempPtr->nextPtr;
    }
    std::cout << std::endl;
}
int& List::operator[] (unsigned int index) {
    if(index < _length){
        if(index == 0) {
            return firstPtr->_data;
        } else if (index == _length - 1) {
            return lastPtr->_data;
        }
        Node * tmp = (Node*) shiftTo(index);
        return tmp->_data;
    } else {
        std::cout << "Error!!";
        int a = -1;
        return a;
    }
}
void* List::shiftTo(unsigned index) {
    if(index < _length) {
        Node* tempPtr = firstPtr;
        for(unsigned int i = 0; i < index; ++i) {
            tempPtr = tempPtr->nextPtr;
        }
        return tempPtr;
    } else {
        std::cout << "Error!!! False Index\n";
    }
}
int List::find(int value) {
    Node* tempPtr = firstPtr;
    for(unsigned int i = 0; i < _length; ++i) {
        if (tempPtr->_data == value) {
            return i;
        }
        tempPtr = tempPtr->nextPtr;
    }
    std::cout << "Error!!! " << value << " is absent\n";
    return -1;
}


int List::remove(unsigned int index) {
    if (index < _length) {
        int value;
        if (index == 0) {
            Node* tempPtr = firstPtr;
            firstPtr = firstPtr->nextPtr;
            value = tempPtr->_data;
            delete tempPtr;
            --_length;
            return value;
        } else if (index == _length - 1) {
            Node* tempPtr = lastPtr;
            lastPtr = (Node*) shiftTo(_length - 2);
            value = tempPtr->_data;
            delete tempPtr;
            --_length;
            return value;
        }
        Node* tempPtr = (Node*) shiftTo(index);
        Node * pre = (Node *) shiftTo(index - 1);
        pre->nextPtr = tempPtr->nextPtr;
        --_length;
        value = tempPtr->_data;
        delete tempPtr;
        return value;
    }
    std::cout << "Error! False index\n";
}
int List::popFront() {
    int value = remove(0);
    return value;
}
int List::popEnd() {
    int value = remove(_length - 1);
    return value;
}
unsigned int List::getLength() {
    return _length;
}

