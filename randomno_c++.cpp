#include <iostream>
#include <cstdlib> // Required for rand() and srand() functions
#include <ctime>   // Required to seed the random number generator

using namespace std;

int main() {

    srand(time(nullptr));

    cout << "Five random numbers between 1 and 100:" << endl;
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand() % 100 + 1; // Generates a random number between 1 and 100
        cout << randomNumber << endl;
    }

    return 0;
}
