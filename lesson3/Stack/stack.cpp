#include <iostream>
class Stack {
    private:
        int top;
        unsigned int n;
        double *arr;
    public:
        int size() {
            return top;
        }
        Stack(unsigned int n = 10) {
            if(n > 0) {
            this -> n = n;
            arr = new double[n];
            top = -1;
            } else {
                std::cout << "Errer!!";
            }
        }
        ~Stack() {
            delete []arr;
        }
        bool isEmpty() {
            return (size() == -1);
            }
        bool isFull() {
            return (size() == n - 1);
        }
        void push(double x) {
            if(!isFull()){
                arr[++top] = x;
            } else {
                std::cout << "Stack is Full!\n";
            }
        }
        double pop() {
            if(!isEmpty()) {
                return arr[top--];
            } else {
                std::cout << "Stack is Empty!\n";
                return -1;
            }
        }
        void print() {
            if (isEmpty()) {
                std::cout << "Stack is Empty!!\n";
            } else {
                for (int i = top; i >= 0; --i) {
                    std::cout << arr[i] << ' ';
                }
                std::cout << '\n';
            }
        }
};
