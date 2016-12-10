#include <iostream>

using namespace std;

void addOvf(int *result, int a, int b) {
    int added = a+b;
    if (a > 0 && b > 0) {
        if (added < 0) {
            *result = -1;
            return;
        }
    } else if (a < 0 && b < 0) {
        if (added > 0) {
            *result = -1;
            return;
        }
    }
    *result = a + b;
}

int main() {
    int result[1];
    int a = 1200000000;
    int b = 1200000000;
    addOvf(result, a, b);
    cout << *result << endl;
    return 0;
}