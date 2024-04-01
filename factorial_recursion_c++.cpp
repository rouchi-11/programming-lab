 #include <iostream>
using namespace std;


unsigned long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    
    return n * factorial(n - 1);
}

int main() {
    int number;

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    // Calculate factorial
    unsigned long fact = factorial(number);

    cout << "Factorial of " << number << " is: " << fact << endl;

    return 0;
}
