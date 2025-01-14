

#include <bits/stdc++.h>
using namespace std;

struct Stack {
    int top;
    int capacity;
    char* array;

    Stack(int cap) {
        capacity = cap;
        top = -1;
        array = new char[capacity];
    }

    void push(char item) {
        if (top == capacity - 1) return;
        array[++top] = item;
    }

    char pop() {
        if (top == -1) return '\0';
        return array[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

void moveDisks(int n, char source, char target, char auxiliary, Stack& stack) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << target << endl;
        return;
    }
    moveDisks(n - 1, source, auxiliary, target, stack);
    cout << "Move disk " << n << " from rod " << source << " to rod " << target << endl;
    moveDisks(n - 1, auxiliary, target, source, stack);
}

int main() {
    int n;
    char source, target, auxiliary;

    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Enter the names of the rods (source, target, auxiliary): ";
    cin >> source >> target >> auxiliary;

    Stack stack(n);
    moveDisks(n, source, target, auxiliary, stack);

    return 0;
}
