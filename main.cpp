#include <iostream>

using namespace std;

void addOvf(int *result, int a, int b) {
    if (a > INT64_MAX-b) {
        *result = -1;
    } else {
        *result = a+b;
    }
}

int main() {
    int result[1];
    int a = 9223372036854775807;
    int b = 9223372036854775807;
    addOvf(result, a, b);
    cout << *result << endl;
    return 0;
}