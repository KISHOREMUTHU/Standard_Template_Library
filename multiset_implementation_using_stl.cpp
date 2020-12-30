// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL 

// Multiset Implementation using STL 
// Multiset is an associative container which can contain duplicate set of sorted elements called keys

#include <iostream>
#include <set>
#include <functional>
using namespace std;

 
int main()
{
    
   std :: multiset<int> mul1; // Declaration of multiset to be sorted in ascending order . By default , this declaration will sort the multiset in ascending order 
   std :: multiset<int, greater <int>> mul2; // Declaration of multiset to be sorted in descending order 
   
   mul1 ={1,2,2,5,7,2,3,4,10,8,6,8};  // Assigning two multisets with same values
   mul2 ={1,2,2,5,7,2,3,4,10,8,6,8};
    
   cout << "The sorted mulitset in ascending order : ";
   for (const auto &e1:mul1){
       
       cout << e1 << " ";
       
                            }
   
   cout << endl;
   
   cout << "The sorted mulitset in descending order : ";
   for (const auto &e2:mul2){
       
       cout << e2 << " ";
       
                            }
    
    return 0 ;
   
}
