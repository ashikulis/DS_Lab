#include <iostream>
using namespace std;

struct Stack {
    int top;
    int capacity;
    char* array;

    Stack(int size) {
        capacity = size;
        top = -1;
        array = new char[size];
    }

    void push(char item) {
        array[++top] = item;
    }

    char pop() {
        return array[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

void iterativeHanoi(int n, char source, char target, char auxiliary) {
    int totalMoves = (1 << n) - 1; // 2^n - 1
    for (int i = 1; i <= totalMoves; i++) {
        char from = source, to = target;
        if (i % 3 == 1) {
            to = target;
        } else if (i % 3 == 2) {
            to = auxiliary;
        } else {
            to = source;
        }
        cout << "Move disk " << (i % n + 1) << " from " << from << " to " << to << std::endl;
    }
}

int main() {
    int n;
    char rod1, rod2, rod3;
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Enter names of the rods (3 characters): ";
    cin >> rod1 >> rod2 >> rod3;
    iterativeHanoi(n, rod1, rod2, rod3);
    return 0;
}