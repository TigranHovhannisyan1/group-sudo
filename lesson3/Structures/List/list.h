//#include "list.cpp"
//#include <iostream>
struct Node {
        int _data;
        Node* nextPtr;
        Node(int info)
            : _data(info)
            , nextPtr(0) {}
        ~Node() {};
};
class List {
    private:
        Node* firstPtr;
        Node* lastPtr;
        unsigned int _length;
    public:
        List();
        List(List &);
        ~List();
        void addFront(int value);
        void addBack(int value);
        void add(unsigned int index, int value);
        void print();
        int & operator[] (unsigned int index);
        Node* find(unsigned int);
        void remove(unsigned int index);
        unsigned int getLength();
};
