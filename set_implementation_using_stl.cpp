// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL

#include <iostream>
#include <set>
#include <functional>
using namespace std;

// Set Implementation using STL
// Set is an associative container that contains a sorted set of unique objects called keys

int main()
{
    std :: set < int > my_set ; // Syntax for creating a set . By default , the keys are sorted and stored in ascending order
    std :: set < int , std :: greater < int > > my_set2; //  Syntax for creating a set in descending order 
    
    cout << "Enter the number of elements to insert inside the set : ";
    int n,x;
    cin >> n;
    
    cout << "Enter the elements to insert : ";
    
    for(int i = 0 ; i < n ; i++){
        
        cin >> x ;
        my_set.insert(x);   // .insert()  function is used to insert an element inside a set
        my_set2.insert(x);
        
                                }
    
    // Set always contain unique elements . So , if any duplicate element is present , it doesn't consider it 
    
    cout << "The set elements in ascending order : ";     
    
    for(const auto &e1:my_set){
        
        cout << e1 << " ";
        
                              }
        cout << endl;
        
    cout << "The set elements in ascending order : "; 
    
    for(const auto &e1:my_set2){
        
        cout << e1 << " ";
        
                               }
     
    return 0;
}
