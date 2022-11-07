
// while loop *****************************************
#include <iostream>

using namespace std;

int main()
{
    int i=0;
    while(i<3)
    {
    cout<<"i = "<<i;
    cout<<"\nWelcome to CONE243\n";
    i++;
    }
    cout<<"i = "<<i;
     
        return 0;
}
 
 
 // sentinal controlled iteration ***********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int gradeCounter=0;
    int grade=0;
    float total=0.0;
    float average=0.0;
    
    cout<<"Enter grade or -1 to exit: ";
    cin>>grade;
    
    while(grade != -1)
    {
    total = total + grade;
    gradeCounter += 1;
    cout<<"Enter grade or -1 to exit: ";
    cin>>grade;
    }
    if(gradeCounter != 0){
        average = total/gradeCounter;
        cout<<"class average is "<<average;
    }
    else
        cout<<"No grade has been entered.";
     
        return 0;
}
 
 

// for loop**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=10; i++)
   
        cout<<"\ni = "<<i;
        cout<<"\ni = "<<i;

        return 0;
}


// math ***************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double amount=0;
    double principal=1000;
    double rate=0.05;
    
    cout<<"year"<<setw(21)<<"Amount of deposit\n";
    for(int year =1; year <= 10; year++){
        amount = principal * pow(1+ rate, year);
        cout<< setw(3)<<year
        <<setw(14)<< amount<<endl;
        
    } // end for

        return 0;
}



// ******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int beta=5;
    do{
        switch(beta){
            case 1: 
                cout<<"R";
                break;
            case 2:
            case 4:
                cout<<"O";
                break;
            case 5:
                cout<<"L";
                
        }
        beta--;
        
    } while(beta>1);
    cout<<"X";

        return 0;
}
  
  
  
// for loop *****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<5; cout<<"i = "<<i<<endl, i++);

        return 0;
}
  