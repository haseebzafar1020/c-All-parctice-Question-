//Create a function to check whether a number is even or odd.
// Input: 4 → Output: Even
#include<iostream>
using namespace std;
void even_odd_fun( int x){
    if(x%2==0){
        cout<<"Even number";
    }
    else{
        cout<<"odd number";
    }
}
int main (){
    int n ;
    cout <<"Enter a number: ";
    cin >> n;
    even_odd_fun(n);
}