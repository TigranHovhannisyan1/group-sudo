#ifndef LIST
#define LIST
class DList {
    private:
        struct Node {
            int _data;
            Node* nextPtr;
            Node* prevPtr;
            Node(int data)
                : _data(data)
                , nextPtr(0)
                , prevPtr(0) {}
            ~Node() {};
        };
        Node* firstPtr;
        Node* lastPtr;
        unsigned int _length;
        void * shiftTo(unsigned int);
    public:
        DList();
        DList(const DList &);
        ~DList();
        void addFront(int value);
        void addEnd(int value);
        void insert(int, unsigned int);
        void print();
        int & operator[] (unsigned int index);
        int find(int);
        int popFront();
        int popEnd();
        int remove(unsigned int index);
        unsigned int getLength();
};
#endif
