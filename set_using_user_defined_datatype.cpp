// # Standard_Template_Library
// In this repository , I am going to upload my codes of showing the features of C++ STL 

// Set Implementation using STL and User - Defined Data Type

// Set is an associative container that contains a sorted set of unique objects called keys


class person {
    public : 
    
     int age ; 
     string name;
     
     // operator overloading for '>' operator
     bool operator > ( const person &obj) const {
         
          return age > obj.age;
          
                                                }
     
     // operator overloading for '<' operator 
     bool operator < ( const person &obj) const {
         
          return age < obj.age;
          
                                                }
};


int main()
{
    std :: set < person > my_set ; // Syntax for creating a set using user-defined data type. By default , the keys are sorted and stored in ascending order
    std :: set < person , std :: greater < > > my_set2; //  Syntax for creating a set using user-defined data type in descending order 
    
    my_set = { {22,"India"}, {30,"Australia"},{ 18 , "Japan"},{42,"Mauritius"}}; // Example for user - defined set
    my_set2 = { {22,"India"}, {30,"Australia"},{ 18 , "Japan"},{42,"Mauritius"}};
   
    
   cout << "The set elements in ascending order : " << endl;     
    
    for(const auto &e1:my_set){
        
        cout << e1 . age << " " << e1 . name << endl ;
        
                              }
        cout << endl;
        
    cout << "The set elements in descending order : " << endl; 
    
    for(const auto &e2:my_set2){
        
        cout << e2 . age << " " << e2 . name << endl;
        
                               }
     
    return 0;
}

