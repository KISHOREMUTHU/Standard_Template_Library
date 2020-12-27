// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL 

// A tree data structure can be represented as a 2d vector since vector is a dynamic array

#include <iostream>
#include <vector>

using namespace std;

// Container inside container implementation

int main(){
      
      std :: vector < vector <int> > tree; // Initialisation of a 2d vector
      int edge , n1, n2;
      cout << "Enter the number of edges of the tree : ";
      cin >> edge;
      
      // Just create the required amount of edges by using resize() function
      tree.resize(edge);
    
    // Using for loop , push_back elements by entering source and destination
    for( int i = 0 ; i < edge ; i++){
    
      cin >> n1 >> n2;
      tree[n1].push_back(n2); // Here 'n1' is the source and 'n2' is the destination
     
                                    }
    
   // Approach 1 : Print the elements of the tree using 2d auto for loop
   for (const auto &e1:tree){
    
        for(const auto &e2:e1){
    
                cout << e2 ;
    
    
                              }
            
        cout << endl ;
        
                            }
   
   // Approach 2 : Print the elements of the tree using a simple 2d for loop                  
   for (int j = 0 ; j < tree.size() ; j++){
    
        for(int k = 0 ; k < tree[j].size() ; k++){
    
                cout << tree[j][k] ;
    
    
                              }
            
                cout << endl ;
        
                            }
            
        return 0;  
    
      }
