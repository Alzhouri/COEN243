
// *******************************************************************************/
//Dr. Fadi Alzhouri
// Example: function overloading
#include <iostream>
using namespace std;

int add(int, int);    // Prototype of addition with two integer parameters
int add(int, int, int); // Prototype of addition with three integer parameters
double add(double, double); //Prototype of addition with two double parameters

int main() {
    cout << "Adding two int: " << add(3, 5) << endl;
    cout << "Adding three int: " << add(2, 4, 6) << endl;
    cout << "Adding two doubles: " << add(2.5, 6.0) << endl;
    return 0;
}

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to add two doubles
double add(double a, double b) {
    return a + b;
}