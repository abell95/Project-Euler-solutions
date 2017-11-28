#include <iostream>

using namespace std;

void fibonacci() {
    int x = 1;
    int y = 2;
    int z = x + y;
    int sum = 0;
    while (z < 4000000) {
        if (z % 2 == 0){
           sum += z;
        }
        x = y;
        y = z;
    }
    cout << sum << endl;
}

int main() {
    fibonacci();
    return 0;
}
