#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    
    cout << "Enter the values of the variables: ";
    cin >> a >> b;

    cout << "Values before swapping: a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "Values after swapping: a = " << a << ", b = " << b << endl;
    
    return 0;
}
