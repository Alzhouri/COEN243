Array examples:

// correct and the output is 12 bytes *******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    const int size=3;
    int myArray[3]={4,5,6};
    cout<< sizeof(myArray);
    return 0;
}

// correct and the output is 12 bytes*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int size=3;
    int myArray[size]={4,5,6};
    cout<< sizeof(myArray);
    return 0;
}

// correct and the output is 12 bytes *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int size=3;
    int myArray[]={4,5,6};
    cout<< sizeof(myArray);
    return 0;
}

// error too many initializers (in case of const)*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int size=3;
    int myArray[size]={4,5,6,8};
    cout<< sizeof(myArray);
    return 0;
}


// correct and the output is 16 bytes*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int size=3;
    int myArray[]={4,5,6,8};
    cout<< sizeof(myArray);
    return 0;
}

// correct and the output is 12 bytes *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int size=3;
    int myArray[size]={4,5,6,8};
    cout<< sizeof(myArray)<<endl;
    cout<< myArray[3];
    return 0;
}


// error too many initializers (in case of constant) *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int size=3;
    int myArray[3]={4,5,6,8};
    cout<< sizeof(myArray)<<endl;
    cout<< myArray[3];
    return 0;
}


// correct and the output is 12 bytes and the last element is 0 **********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int size=3;
    int myArray[size]={4,5};
    cout<< sizeof(myArray)<<endl;
    cout<< myArray[3];
    return 0;
}


// error ‘array’ was not declared *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    array<int,3>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}


// error note: ‘int size’ is not const *******************************************************************************/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int size=3;
    array<int,size>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}


// correct and the output is 12 bytes *******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int size=3;
    array<int,size>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}

// error uninitialized ‘const size'*******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int size;
    array<int, size>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}


// error note: ‘size_t size’ is not const *******************************************************************************/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    size_t size=3;
    array<int, size>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}

// error error: ‘list1’ was not declared *******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, list1.size()>list1{3,4,5};
    cout<< sizeof(list1);
    return 0;
}


// correct the output is 5 *******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3>list1;
    list1={3,4,5};
    cout<< list1[2];
    return 0;
}

// error: use array name list1.size()*******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3>list1;
    cout<< array.size();
    return 0;
}