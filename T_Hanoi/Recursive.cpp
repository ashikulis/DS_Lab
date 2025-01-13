#include <iostream>
using namespace std;

void movedisk(char from, char to) {
    cout << "Move disk from " << from << " to " << to << endl;
}

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        movedisk(from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    movedisk(from, to);
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    char rod1, rod2, rod3;
    cout << "Enter number of disks: ";
    cin >> n;
    cout << "Enter names of the rods (3 characters): ";
    cin >> rod1 >> rod2 >> rod3;
    towerOfHanoi(n, rod1, rod2, rod3);
    return 0;
}