#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) {
        return 0; // Failure to reduce
    }
    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;
    return 1; // Successfully reduced
}

int main() {
    int numerator = 8;
    int denominator = 12;
    if (reduce(numerator, denominator)) {
        cout << "Reduced fraction: " << numerator << "/" << denominator << endl;
    } else {
        cout << "Failed to reduce the fraction." << endl;
    }
    return 0;
}


