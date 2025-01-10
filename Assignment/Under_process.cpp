#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    void push(int value) {
        items.push_back(value);
    }

    int pop() {
        if (items.empty()) {
            return -1;
        }
        int value = items.back();
        items.pop_back();
        return value;
    }

    int peek() {
        if (items.empty()) {
            return -1;
        }
        return items.back();
    }

    bool is_empty() {
        return items.empty();
    }

private:
    vector<int> items;
};

void hanoi_recursive(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    hanoi_recursive(n - 1, source, target, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    hanoi_recursive(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    char source, auxiliary, target;

    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "Enter the source rod: ";
    cin >> source;
    cout << "Enter the auxiliary rod: ";
    cin >> auxiliary;
    cout << "Enter the target rod: ";
    cin >> target;

    hanoi_recursive(n, source, auxiliary, target);
    return 0;
}
