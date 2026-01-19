#include <iostream>
using namespace std;

int main() {
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second number: ";
    cin >> r2 >> i2;

    int real = r1 + r2;
    int imag = i1 + i2;

    cout << "Sum = " << real << " + " << imag << "i";

    return 0;
}
