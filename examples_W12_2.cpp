

// example 1: linear search*******************************************************************************/

#include <iostream>
using namespace std;

// Search the array for the given key
// If found, return array index [0, size-1]; otherwise, return -1
int linSearch(int array[], int size, int key) {
   for (int i = 0; i < size; i++) {
      if (array[i] == key) 
	       return i;
   }
   return -1;
}
 
int main() {
   const int size = 10;
   int a[size] = {9, 4, 5, 2, 2, 3, 8, 1};
 
   cout << linSearch(a, size, 2) << endl;  
   cout << linSearch(a, size, 7) << endl; 
}
 
 
// function template *******************************************************************************/

#include <iostream>
using namespace std;

template <typename T> T maxNum(T x, T y){
  T result = (x>y)? x : y;
  return result;
}

int main () {
  int a{4}, b{7}, c;
  c=maxNum<int>(a,b);
  double d=maxNum(8.2, 4.5);
  cout << c << endl;
  cout << d << endl;
  return 0;
}



// example 3: linear search *******************************************************************************/

#include <iostream>
#include <array>
using namespace std;

// compare key to every element of array until location is     
// found or until end of array is reached; return location of  
// element if key is found or -1 if key is not found           
template <typename T, size_t size>                           
T linearSearch(const array<T, size>& items, const T& key) {
   for (size_t i{0}; i < items.size(); ++i) {                
      if (key == items[i]) { // if found,                    
         return i; // return location of key                 
      }                                                      
   }                                                         
   return -1; // key not found                               
}                                                            

int main() {
   const size_t arraySize{100}; // size of array 
   array<int, arraySize> arrayToSearch; // create array

   for (size_t i{0}; i < arrayToSearch.size(); ++i) {
      arrayToSearch[i] = 2 * i; // create some data
   }

   cout << "Enter integer search key: ";
   int searchKey; // value to locate 
   cin >> searchKey;

   // attempt to locate searchKey in arrayToSearch
   int element{linearSearch(arrayToSearch, searchKey)};

   // display results
   if (element != -1) {
      cout << "Found value in element " << element << endl;
   }
   else {
      cout << "Value not found" << endl;
   }
} 



// example 1: binary search *******************************************************************************/

#include <iostream>
using namespace std;

    int binarySearch(int array1[], int key, int size)
    {
     int low = 0;
     int high = size - 1;
     
     while (low <= high)
     {
     int mid = (low + high) / 2;
     if (key < array1[mid])
        high = mid - 1;
     else if (key == array1[mid])
            return mid;
          else
            low = mid + 1;
     }
     return -1;
    }
int main()
{
    const size_t arraySize=10;
    int a[arraySize]={12, 14, 20, 25, 26, 36, 40, 43, 50,59};
    int item = binarySearch(a, 20, 10);
    cout << "Its index = " << item;
    
    return 0;
}


// example 2: binary search *******************************************************************************/

#include <iostream>
#include <array>
using namespace std;
    const size_t size=10;
    int binarySearch(array<int, size> &array1, int key)
    {
     int low = 0;
     int high = size - 1;
     
     while (low <= high)
     {
     int mid = (low + high) / 2;
     if (key < array1[mid])
        high = mid - 1;
     else if (key == array1[mid])
            return mid;
          else
            low = mid + 1;
     }
     return -1; 
    }
int main()
{
    array<int, size>a={12, 14, 20, 25, 26, 36, 40, 43, 50,59};
    int item = binarySearch(a, 43);
    cout << "Its index = " << item;
    
    return 0;
}

