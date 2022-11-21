

// initializing allocated memory *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double *p1 = new double(4.0);
    cout << "p1="<<p1<<" points to "<<*p1<<endl;
    double *p2 = new double{5.8};
    cout << "p2="<<p2<<" points to "<<*p2<<endl;
    return 0;
}

// dynamic allocated array *******************************************************************************/

#include <iostream>
using namespace std;

int main()
{   // Dynamic array is allocated at runtime to pointer p
    int* p = new int[5];
    cout << "p[0]="<<*p<<endl;       // the first element 
    cout << "p[1]="<<*(p+1)<<endl;  // the second element
    return 0;
}

// initializing dynamic array *******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   // Dynamic array is allocated at runtime to pointer p
    int* p = new int[5];
    for(int i=0; i<5;i++)
    {
        p[i]=5+i;
        cout << "p["<<i<<"]="<<p[i]<<endl;
    } 
    return 0;
}



// Linked list *******************************************************************************/

#include <iostream>
using namespace std;
class Node{
    private:
        // data members
    int element;
    Node* link;
    
    public:
        // constructors' prototypes
    Node(int);
    
        // member functions' prototypes
    void setData(int);
    int getData() const;
    void setNext(Node*);
    Node* getNext() const;
};

Node::Node(int x){
    element = x;
    link = nullptr;
}

void Node::setData(int x){
    element = x;
}

int Node::getData() const{
    return element;
}
   
void Node::setNext(Node* ptr){
    link = ptr;
}

Node* Node::getNext() const{
    return link;
}

int main()
{   
    Node* p= new Node(10);
    Node* q= new Node(20);
    cout <<"Node p has "<<p->getData()<<" and linked to "<<p->getNext()<<endl;
    p->setNext(q);
    cout <<"Node p has "<<p->getData()<<" and linked to "<<p->getNext()<<endl;
    q->setData(40);
    cout <<"Node q has "<<q->getData()<<" and linked to "<<q->getNext()<<endl;
    
    return 0;
}
