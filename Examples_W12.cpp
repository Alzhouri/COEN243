
// Try-catch block *******************************************************************************/

#include <iostream>
using namespace std;
int main () 
{
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
 
    try
    {
    if (num2 == 0)
        throw num2;
    cout << num1 << " / " << num2 << " = "
         << (num1 / num2) << endl;
    }
    catch (int y)
    {
    cout << "Exception: Division by " 
         << y << " is invalid" << endl;
    }
    cout << "here you go ..." << endl;
return 0;
}



// try-catch throw value *******************************************************************************/

#include <iostream>
using namespace std;
int main () 
{ 
    char myarray[10];
    try 
    {
        for (int n = 0; n <= 10; n++) { 
        if (n > 9) 
        throw "Out of range"; // force program to go to “catch” 
        myarray[n]='z';
        }
    }
    catch (const char * str) 
    {
        cout << "Exception: " << str << endl; 
    }
return 0; 
}




// multi catch blocks*******************************************************************************/

#include <iostream>
using namespace std;
int main () 
{ 
    try 
    {
        char* mystring; 
        mystring = new char [10]; 
        if (mystring == NULL) 
            throw "Allocation failure"; 
        for (int n{0}; n <= 10; n++) 
        { 
            if (n>9) 
                throw n; 
            mystring[n] = 'z'; 
        }
    }
    catch (int i)
    {
        cout << "Exception: "; 
        cout << "index " << i << " is out of range" << endl; 
    }
    catch (const char * str) 
    {
        cout << "Exception: " << str << endl;
    }
return 0;
} 



// catch any exception *******************************************************************************/

#include <iostream>
using namespace std;
int main () 
{ 
    try 
    {
        char* mystring; 
        mystring = new char [10]; 
        if (mystring == NULL) 
            throw "Allocation failure"; 
        for (int n{0}; n <= 10; n++) 
        { 
            if (n>9) 
                throw n; 
            mystring[n] = 'z'; 
        }
    }
    catch (...) 
    {
        cout << "An exception occurred, handle it here "
             << endl;
    }
return 0;
} 


// Functions and exceptions *******************************************************************************/

#include <iostream>
using namespace std;
int division(int a, int b) {
    if (b == 0)
    throw "Divide by zero exception";
    return a/b;
    } 
int main() 
{
    int x, y, z;
    try 
    {
        cout << "Enter x and y: \n"; cin >> x; cin >> y;
        z = division(x, y); 
        cout << "result is: " << z;
    }
    catch (const char* e) 
    {
        cout << "Exception: " << e << endl;
    }
return 0;
}
