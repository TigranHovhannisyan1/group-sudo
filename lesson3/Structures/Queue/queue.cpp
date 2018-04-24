#include <iostream>
#include "queue.h"
Queue::Queue(int m)
: _size(m)
, _length(0)
, _first(0)
, _last(0) {
    _arr = new int[_size];
}
Queue::Queue(Queue & q)
    : _size(q._size)
    , _length(q._length)
    , _first(q._first)
    , _last(q._last) {
        _arr = new int [_size];
        unsigned int i = _first;
        do {
            _arr[i] = q._arr[i];
            i = (i + 1) % _size;
        } while (i != _last);
        std::cout << "Coppy constructor\n";
}

Queue::~Queue() {
    delete [] _arr;
}

void Queue::print () const {
    if(_length == 0) {
        std::cout << "Empty!\n";
        return;
    }
    int i = _first;
    do {
        std::cout << _arr[i] << " ";
        i = (i + 1) % _size;
    } while (i != _last);
    std::cout << std::endl;

}

bool Queue::isEmpty () const {
    return (_length == 0);
}

bool Queue::isFull () const {
    return (_length == _size);
}

void Queue::enqueue(int value) {
    if(!isFull()) {
        _arr[_last] = value;
        ++_length;
        _last = (_last + 1) % _size;
    } else {
        std::cout << "Queue is full\n";
    }
}

int Queue::dequeue() {
    if (!isEmpty()) {
        _length--;
        int x = _arr[_first];
        _first =( _first + 1 ) % _size;
        return x;
    } else {
        std::cout << "Queue is empty\n";
        return -1;
    }
}

unsigned int Queue::getLength() {
    return _length;
}
