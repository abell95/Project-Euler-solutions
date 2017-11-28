#include <iostream>

using namespace std;

int threeOrFiveMult() {
    int sum = 0;
    for (int i{0}; i < 1000; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << threeOrFiveMult();
    return 0;
}
