#include <iostream>
#include "vector.h"
Vector::Vector(unsigned int length) {
    _length = 2 * length;
    _arr = new double [_length];
}

Vector::Vector(const Vector& v)
: _length(v._length) {
    this->_arr = new double[_length];
    for (unsigned int i = 0; i < _length; i++) {
        _arr[i] = v._arr[i];
    }
    std::cout << "//Coppy Constructor" << std::endl;
}

Vector::~Vector() {
    std::cout << "//Destructor\n";
    delete [] _arr;
}

double& Vector::operator[](unsigned int index) {
    double a = -1;
    if(index > _length) {
        std::cout << "Input true index\n";
        return a;
    }
    return _arr[index];
}

int Vector::resize(unsigned int m) {
    m *=2;
    if (m < _length) {
        for (unsigned int i = m; i < _length; ++i) {
            _arr[i] = 0;
        }
        return -1;
    } else if (m == _length) {
        return -1;
    }
    double *arr = new double[m];
    for (unsigned int i = 0; i < _length; ++i) {
        arr[i] = _arr[i];
    }
    delete[] _arr;
    _arr = arr;
    _length = m;
    return 0;
}

unsigned int Vector::getLength(){
        return _length;
}

void Vector::insert (unsigned int index, double a) {
    for (unsigned int i = _length - 1; i > index; --i) {
        _arr[i] = _arr[i - 1];
    }
   _arr[index] = a;
}

void Vector::print() {
    for (unsigned int i = 0; i < _length; ++i) {
        std::cout << _arr[i] << ' ';
        }
    std::cout << std::endl;
}

int Vector::find(double value) {
    for (unsigned int i = 0; i < _length; i++) {
        if (_arr[i] == value) {
            return i;
        }
    }
    std::cout << "Тhis vector does not contain this value!";
    return -1;
}

void Vector::remove (unsigned int index) {
    if (index < _length) {
        for (unsigned int i = index; i < _length - 1; ++i) {
            _arr[i] = _arr[i+1];
        }
        _arr[_length - 1] = 0;
    }
}
