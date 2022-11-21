// get() function *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i;
    cout <<"Enter char: ";
    i = cin.get();
    cout << "you hit "<< i;
    return 0;
}


// get with reference argument*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i;
    cout <<"Enter char: ";
    cin.get(i);
    cout << "you hit "<< i;
    return 0;
}


// get with reference argument 2 *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i,j,k;
    cout <<"Enter char: ";
    cin.get(i).get(j).get(k);
    cout << "you hit "<< i <<j<<k;
    return 0;
}


// get with reference argument 3*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i,j;
    cout <<"Enter char: ";
    cin.get(i)>>j;
    cout << "you hit "<< i <<j;
    return 0;
}

// get (array, size, )*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i[8];
    cout <<"Enter string i: ";
    cin.get(i,8);
    cout << "array i = "<< i;
    return 0;
}

// get(array, size, delimiter)*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i[8];
    cout <<"Enter string i: ";
    cin.get(i,8,'c');
    cout << "array i = "<< i;
    return 0;
}


// getline *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char i[18];
    char j[18];
    char k[18];
    cout <<"Enter string i: ";
    cin.getline(i,18);
    cout << "array i = "<< i<<endl;
    cout <<"Enter string j: ";
    cin>>j;
    cout << "array j = "<< j<<endl;
    cout <<"Enter string k: ";
    cin.getline(k,18);
    cout << "array k = "<< k<<endl;
    return 0;
}



// char output using put *******************************************************************************/

 #include <iostream>
 using namespace std;

 int main()
 {
   cout.put('H').put('i').put('\n'); 
   cout.put('!');
   return 0;
}

// get and put *******************************************************************************/

 #include <iostream>
 using namespace std;

 int main()
 {
    char character; 
    cout << "\nEnter a sentence followed by \\n:\n";
    // use get to read each character; use put to display it
    character = cin.get();
    while (character != '\n') {
        cout.put(character);
        character = cin.get(); 
    }
    return 0;
}
