
// store Address using pointers..
#include<iostream>
using namespace std;
int main (){
    int x = 10;    // initilization 
    int* ptr = &x ;   // Ptr store  x variable address....
    
    cout<<"ADDRESS OF X Variable : " << &x <<endl;  
    cout<<"ADDRESS OF X VARIABLE STORE IN PTR : "<< ptr<<endl; 
    cout << "VAlUE OF X : " << x  <<endl;
    cout << "VALUE OF X THROUGH ADDRESS REFRENCE : " << *ptr;

}