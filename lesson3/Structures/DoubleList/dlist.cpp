#include <iostream>
#include "dlist.h"

DList::DList()
    : firstPtr(0)
    , lastPtr(0)
    , _length(0) {}
DList::DList(const DList & k) 
    :_length(0) {
        std::cout << "Coppy constructor\n";
        Node* tmp = k.firstPtr;
        addEnd(tmp->_data);
        do {
            tmp = tmp->nextPtr;
            addEnd(tmp->_data);
        } while(tmp != k.lastPtr);
}
DList::~DList(){
    while (firstPtr) {
        Node* tempPtr = firstPtr->nextPtr;
        delete firstPtr;
        firstPtr = tempPtr;
    }
}
void DList::addFront(int value) {
    if (_length) {
        Node* tempPtr = firstPtr;
        firstPtr = new Node(value);
        tempPtr->prevPtr = firstPtr;
        firstPtr->nextPtr = tempPtr;
    } else {
        firstPtr = new Node(value);
        lastPtr = firstPtr;
    }
    ++_length;
}
void DList::addEnd(int value) {
    if(firstPtr) {
        Node* tempPtr = new Node(value);
        lastPtr->nextPtr = tempPtr;
        tempPtr->prevPtr = lastPtr;
        lastPtr = tempPtr;
    } else {
        firstPtr = new Node(value);
        lastPtr = firstPtr;
    }
    ++_length;
}
void DList::insert(int value, unsigned int index) {
    if(index <= _length){
        if(index == 0) {
            addFront(value);
            return;
        } else if (index == _length) {
            addEnd(value);
            return;
        }
        Node* prev = (Node*) shiftTo(index-1);
        Node* next = prev->nextPtr;
        Node* tempPtr = new Node(value);
        //tempPtr->nextPtr = new Node(value);
        prev->nextPtr = tempPtr;
        tempPtr->nextPtr = next;
        tempPtr->prevPtr = prev;
        next->prevPtr = tempPtr;
        ++_length;
    } else {
        std::cout << "Error!! False index\n";
    }
}
void DList::print() {
    Node* tempPtr = firstPtr;
    for (unsigned int i = 0; i < _length; ++i) {
        std::cout << tempPtr->_data << ' ';
        tempPtr = tempPtr->nextPtr;
    }
    std::cout << std::endl;
}
int& DList::operator[] (unsigned int index) {
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
void* DList::shiftTo(unsigned index) {
    if(index < _length) {
        if (index < _length / 2) {
            Node* tempPtr = firstPtr;
            for(unsigned int i = 0; i < index; ++i) {
                tempPtr = tempPtr->nextPtr;
            }
        return tempPtr;
        } else {
            Node* tempPtr = lastPtr;
            for(unsigned int i = _length - 1; i > index; --i) {
                tempPtr = tempPtr->prevPtr;
                }
        }
    } else {
        std::cout << "Error!!! False Index\n";
    }
}
int DList::find(int value) {
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


int DList::remove(unsigned int index) {
    if (index < _length) {
        int value;
        if (index == 0) {
            Node* tempPtr = firstPtr;
            firstPtr = firstPtr->nextPtr;
            firstPtr->prevPtr = 0;
            value = tempPtr->_data;
            delete tempPtr;
            --_length;
            return value;
        } else if (index == _length - 1) {
            Node* tempPtr = lastPtr;
            lastPtr = lastPtr->prevPtr;
            lastPtr->nextPtr = 0;
            value = tempPtr->_data;
            delete tempPtr;
            --_length;
            return value;
        }
        Node* tempPtr = (Node*) shiftTo(index);
        Node * pre = tempPtr->prevPtr;
        pre->nextPtr = tempPtr->nextPtr;
        --_length;
        value = tempPtr->_data;
        delete tempPtr;
        return value;
    }
    std::cout << "Error! False index\n";
}
int DList::popFront() {
    int value = remove(0);
    return value;
}
int DList::popEnd() {
    int value = remove(_length - 1);
    return value;
}
unsigned int DList::getLength() {
    return _length;
}

