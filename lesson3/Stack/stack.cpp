#include <iostream>
class Stack {
    private:
        int top;
        int n;
        double *arr;
        int size() {
            return top;
        }
    public:
        Stack(int n = 10) {
            this -> n = n;
            arr = new double[n];
            top = -1;
        }
        ~Stack() {
            delete []arr;
        }
        bool isEmpty() {
            if(size() == -1) {
                return true;
            } else {
                return false;
            }
        }
        bool isFull() {
            if(size() == n - 1) {
                return true;
            } else {
                return false;
            }
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
                return 0;
            }
        }
        void print() {
            if (isEmpty()) {
                std::cout << "Stack is Empty!!\n";
            } else {
                for (int i = top; i >= 0; i--) {
                    std::cout << arr[i] <<' ';
                }
                std::cout << '\n';
            }
        }

};
