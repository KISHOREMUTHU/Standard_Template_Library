// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL 

#include <iostream>
#include <vector>

using namespace std;

// Vector Implementation Using STL
// Vector is a dynamic array or an array list which has a fast access time


int main(){
   
   // Initialisation of a vector
   std::vector<int> my_vec;  // Syntax :    std :: vector < data_type > vector_name;
   
   my_vec.reserve(100); // reserve() function is used to set the vector's capacity to a specific value 
    
   for(int i=0;i<101;i++){
       
      my_vec.push_back(i);
      cout << "Size : " << my_vec.size() << "  Capacity : " << my_vec.capacity() << endl;


                         }
     
    // Accessing of vector elements       
    cout << endl << "Usage of functions to access elements :"  << endl << endl;    
   
    
    // 1) .at() function is used to find the element at a specific index .If the index value given is more than the vector size , it will throw an exception as out of bound 
    cout << "Element at index 3 : " << my_vec.at(3) << endl;
    
    // 2) [] is a traditional method which is used to find an element at a specific position . It will not throw an exception. If the given index value is greater than array size , then it will throw garbage value
    cout << "Element at index 5 : " << my_vec[5] << endl;
   
    // 3) .front() function is used to print the first element of the vector
    cout << "First element of the vector : " << my_vec.front() << endl;
    
    // 4) .back() function is used to print the last element of the vector
    cout << "Last element of the vector : " << my_vec.back() << endl;
    
    // 5) .data() function gives the starting address of the vector
    cout << "Starting address of the vector : " << my_vec.data() << endl;
          }
