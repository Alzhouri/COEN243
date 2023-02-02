// nested for loop *************************************
// Write C++ code to print the multiplication table for numbers 1 to 4
#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<5;i++)
        for(int j=1; j<5; j++)
            cout<<i<<" x "<<j<<"= "<<i*j<<endl;

    return 0;
}

// nested loop *************************************
// Example 2: Write C++ code to print the multiplication table for numbers 1 to 4 version2
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"i\\j:";
    for(int j=1; j<5; j++)
        cout<<setw(3)<<j;
        cout<<endl;
    for(int i=1; i<5; i++){
        cout<<i<<"  :";
        for(int j=1; j<5; j++)
            cout<<setw(3)<<i*j;
        cout<<endl;
    }

    return 0;
}

// Example 3
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<5; i++){
        for(int j=1; j<5; j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}



// example 4: ******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}


// Example 5:******************************************************************************/
// The default integer value is used to initialize the counter i=0;

#include <iostream>
using namespace std;

int main()
{
    int i;
    for( ; i<5; i++ )
        cout<<i<<endl;

    return 0;
}


// math functions ******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        cout<<ceil(4.82)<<endl;
        cout<<floor(4.82)<<endl;
        cout<<pow(4.82,2)<<endl;
        cout<<sqrt(4.82)<<endl;

    return 0;
}


// setprecision example *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double i=19.1234;
        cout<<"i = "<<i<<endl;
        cout<<setprecision(3)<<"i = "<<i<<endl;
        cout<<setprecision(4)<<"i = "<<i<<endl;
        cout<<setprecision(5)<<"i = "<<i<<endl;
        
    return 0;
}



// fixed example ****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double i=1900.1234;
        cout<<"i = "<<i<<endl;
        cout<<fixed<<"i = "<<i<<endl;
        cout<<setprecision(4)<<"i = "<<i<<endl;
        cout<<setprecision(5)<<"i = "<<i<<endl;
        
    return 0;
}


// setw example ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        for(int i=1; i<5; i++)
        cout<<i<<endl;
        
        for(int i=1; i<5; i++)
        cout<<setw(4)<<i<<endl;
        
        for(int i=1; i<5; i++)
        cout<<setw(8)<<i<<endl;
        
    return 0;
}



// casting example 1******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double i = 5.17;
    int j = static_cast<int>(i);
    cout<<"j= "<<j<<endl;
    cout<<"i= "<<i<<endl;
        
    return 0;
}


// casting example 2 ******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int i= 10;
    int j= 3;
    cout<<"i/j = "<<static_cast<double>(i)/j<<endl;
    cout<<"i/j = "<<static_cast<double>(i/j);
    
    return 0;
}


// implicit casting example 3 *******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=4;
    double b=2.5;
    cout<< fixed<<setprecision(1);
    cout<< "a= "<<a <<endl;
    cout<< "b= "<<b <<endl;
    b=a;
    cout<< "b= "<<b <<endl;
    
    return 0;
}