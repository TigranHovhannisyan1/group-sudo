#include <iostream>
#include "list.h"

List::List()
    : firstPtr(0)
    , lastPtr(0)
    , _length(0) {}
List::List(List & k)
    : _length(k._length) {
            Node* tmp = k.firstPtr;
            while (tmp->nextPtr != 0) {
                this->addBack(tmp->_data);
                tmp = tmp->nextPtr;
            }
            std::cout << "Coppy constructor\n";
}
/*List::List(List & k)
    : _length(k._length) {
            Node* tmp = k.firstPtr;
            Node* tempPtr = new Node(tmp->_data);
            firstPtr = tempPtr;
        while (tmp->nextPtr != 0) {
            //Node tmp = l.firstPtr;
            tmp = tmp->nextPtr;
            tempPtr = new Node(tmp->_data);
            tempPtr = tempPtr->nextPtr;
        }
        lastPtr = tempPtr;
        std::cout << "Coppy constructor\n";
}*/
List::~List(){
    while (firstPtr != 0) {
        Node* tempPtr = firstPtr->nextPtr;
        delete firstPtr;
        firstPtr = tempPtr;
    }
}
void List::addFront(int value) {
    if (_length != 0) {
        Node* tempPtr = firstPtr;
        firstPtr = new Node(value);
        firstPtr->nextPtr = tempPtr;
        ++_length;
    } else {
        ++_length;
        firstPtr = new Node(value);
        lastPtr = firstPtr;
    }
}
void List::addBack(int value) {
    lastPtr->nextPtr = new Node(value);
    lastPtr = lastPtr->nextPtr;
    ++_length;
}
void List::add(unsigned int index, int value) {
    if(index <= _length){
        if(index == 0) {
            addFront(value);
            return;
        } else if (index == _length) {
            addBack(value);
            return;
        }
        Node* tempPtr = firstPtr;
        for(unsigned int i = 0; i < index; ++i) {
            tempPtr = tempPtr->nextPtr;
        }
        Node* tmp = tempPtr->nextPtr;
        tempPtr->nextPtr = new Node(value);
        tempPtr = tempPtr->nextPtr;
        tempPtr->nextPtr = tmp;
        ++_length;
    } else {
        std::cout << "Error!!";
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
    if(index <= _length){
        if(index == 0) {
            return firstPtr->_data;
        } else if (index == _length) {
            return lastPtr->_data;
        }
        return find(index)->_data;
    } else {
        std::cout << "Error!!";
        int a = -1;
        return a;
    }
}
Node* List::find(unsigned index) {
        if(index < _length) {
            Node* tempPtr = firstPtr;
            for(unsigned int i = 0; i < index; ++i) {
                tempPtr = tempPtr->nextPtr;
            }
            return tempPtr;
        } else {
            std::cout << "Error!!!\n";
        }
}

void List::remove(unsigned int index) {
    if (index < _length) {
        if (index == 0) {
            Node* tempPtr = firstPtr;
            firstPtr = firstPtr->nextPtr;
            delete tempPtr;
            --_length;
            return;
        } else if (index == _length) {
            Node* tempPtr = lastPtr;
            lastPtr = find(_length -1);
            delete tempPtr;
            --_length;
            return;
        }
        Node* tempPtr = find(index);
        find(index-1)->nextPtr = tempPtr->nextPtr;
        --_length;
        delete tempPtr;
    }
}
unsigned int List::getLength() {
    return _length;
}
