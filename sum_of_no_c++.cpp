#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;
    // Calculate sum of digits
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = number; // Initialize sum with the input number

 
    while (sum >= 10) {
        sum = sumOfDigits(sum);
    }

    cout << "Sum of digits until it becomes a single digit: " << sum << endl;

    return 0;
}
