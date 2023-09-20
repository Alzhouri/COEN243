
// Algorithm *******************************************************************************/
#include <iostream> 
using namespace std;

int main() {
    int L=0;
    int W=0;
    int P=0;
    
    cout << "To calculate the perimeter of a rectangle: ";
    cout << "\nEnter the length L: ";
    cin >> L;
    cout << "Enter the width W: ";
    cin >> W;
    P=2*(L+W);
    cout << "The perimeter P = " << P;
    
   return 0;
} 


// if statement ********************************


// Conditional instructions: Control and decision statements
// If statement
// Dr. Fadi Alzhouri

#include <iostream>
using namespace std;

int main()
{
    // Define a variable of type integer.
    int grade=0;
    // Prompt the user to enter a grade.
    cout<< "Enter your grade: ";
    cin >> grade;
    
    // Evaluate the grade, input, using an if statement.
    if(grade >=60)
        cout<< "Student passed the course"; 

    return 0;
}



// If-else Selection Statement ****************************************
#include <iostream>

using namespace std;

int main()
{
    int grade=0;
    cout <<"Enter student\'s grade: ";
    cin >> grade;
    if(grade >= 60)
    cout << "Student passed the course";
    else
    cout << "Student failed the course";
    return 0;
}


//Nested if-else *******************************************/

#include <iostream>

using namespace std;

int main()
{
    int grade=0;
    cout <<"Enter student\'s grade: ";
    cin >> grade;
    if(grade >= 90)
    cout << "A";
    else if(grade >= 80)
    cout << "B";
    else if(grade >= 70)
    cout << "C";
    else if(grade >= 60)
    cout << "D";
    else 
    cout << "F";
    return 0;
}


// if using {} **********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int grade=0;
    cout <<"Enter student\'s grade: ";
    cin >> grade;
    if(grade >= 60)
    cout << "Passed\n";
    else 
    cout << "Faild\n";
    cout << "You must take this course again.";
    return 0;
}


// tracing if-else *********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int grade=0;
    cout <<"Enter student\'s grade: ";
    cin >> grade;
    if(grade >= 50)
    cout << "line A\n";
    else 
    cout << "Line B\n";
    cout << "Line C\n";
    if (grade < 90)
    cout << "line D\n";
    cout << "line E";
    return 0;
}



// even / odd **************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number=0;
    cout <<"Enter a number ";
    cin >> number;
    if(number % 2 == 0)
    cout << number <<" is even";
    else
    cout << number << " is odd";
    return 0;
}




// switch **********************************************************/

#include <iostream>

using namespace std;

int main()
{
    int watts=25;
    switch(watts)
    {
    case 25: 
        cout << "Life expentancy is 2500 hours.\n ";
        break;
    case 60: 
        cout << "Life expentancy is 1000 hours.\n ";
        break;
    case 100:
        cout << "Life expentancy is 750 hours.\n ";
        break;
        
    default: cout << "Invalid Bulb !!\n";
    }
    
    return 0;
}

// shapes *****************************************************/

#include <iostream>

using namespace std;

int main()
{
    int width=0;
    int length=0;
    int shape=1;
    cout<<"This code calculate the perimeter of your shape\n";
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"\nEnter the length: ";
    cin>>length;
    cout<<"Select 1:square 2:rectangle 3:triangle: ";
    cin>>shape;
    if(width>0)
        if(length>0)
            switch(shape){
            case 1:cout<<"square perimeter = "<<4*width;
            break;
            case 2:cout<<"rectangle perimeter = "<< 2*(width+length);
            break;
            case 3:cout<<"triangle perimeter = "<<3*length;
            break;
            default:cout<<"invalid input";
            }
        else cout<<"invalid length";
    
    else cout<<"invalid width";
    

    return 0;
}



// shape 2 ************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int width=0;
    int length=0;
    int shape=1;
    cout<<"This code calculate the perimeter of your shape\n";
    cout<<"Select 1:square 2:rectangle 3:triangle: ";
    cin>>shape;
    if(shape==1){
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"square perimeter = "<<4*width;
    }
    else if(shape==2){
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"\nEnter the length: ";
    cin>>length;
    cout<<"rectangle perimeter = "<< 2*(width+length);
    }
    else if(shape==3){
    cout<<"\nEnter the length: ";
    cin>>length;
    cout<<"triangle perimeter = "<<3*length;
    }
    else cout<<"invalid input";
    
    return 0;
}


// precedence **********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i=2,k=0;
    k=i++ + 2 *3;
    cout<<"i = "<<i;
    cout<<"\nk = "<< k;
    
    
    return 0;
}