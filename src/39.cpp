#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * 2 << endl; // If the number is even, multiply it by 2
    } else {
        cout << n / 2 << endl; // Otherwise, divide the number by 2 and output the result
    }
}
