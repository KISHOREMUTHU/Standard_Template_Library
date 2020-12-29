// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL 


#include <iostream>
#include <set>
#include <functional>
using namespace std;

// 
int main()
{
    
   std :: multiset<int> mul1;
   std :: multiset<int, greater <int>> mul2;
   
   mul1 ={1,2,2,5,7,2,3,4,10,8,6,8};
   mul2 ={1,2,2,5,7,2,3,4,10,8,6,8};
   
   for (const auto &e1:mul1){
       
       cout << e1 << " ";
       
                            }
   
   cout << endl;
   
   for (const auto &e2:mul2){
       
       cout << e2 << " ";
       
                            }
   
}
