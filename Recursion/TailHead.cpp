#include <iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        cout << n << " ";  // Corrected syntax to print the value of n
        fun(n - 1);
    }
}

int main() {
    int x = 3;
    fun(x);

    return 0;
}
