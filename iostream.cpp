
// enter two integert numbers
// display the sum
#include <iostream> // enables program to perform input and output

using namespace std;


// function main begins program execution
int main() {
   int number1; // first integer 
   int number2; // second integer
   int sum;
   
   cout << "Enter the first value "; // prompt user for data
   cin >> number1; // read the first integer from user

   cout << "Enter the second value "; // prompt user for data
   cin >> number2; // read the second integer from user

   sum = number1 + number2;

   cout << "The result is " << sum; // display the result
   
 
} // end function main


