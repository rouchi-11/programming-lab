#include<iostream>
using namespace std;


void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    
    cout << "Enter the values of the variables: ";
    cin >> a >> b;

    swap(a, b);

    cout << "Values after swapping are: " << a << " " << b << endl;
    
    return 0;
}
