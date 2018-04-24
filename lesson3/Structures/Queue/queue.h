class Queue {
private:
    const int _size;
    int *_arr;
    int _first;
    int _last;
    int _length;

public:
    Queue(int =10);
    Queue(Queue &);
    ~Queue();
    void print () const;
    bool isEmpty () const;
    bool isFull () const;
    void enqueue(int);
    int dequeue();
    unsigned int getLength();
};
