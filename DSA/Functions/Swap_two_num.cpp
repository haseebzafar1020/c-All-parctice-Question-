
//Function to swap two numbers using call by reference.
// Input: a = 10, b = 20 → Output: a = 20, b = 10
#include<iostream>
using namespace std;

void swap(int &x , int &y){
  int z = x;
  x = y;
  y = z;

}
int main (){
    int n , m;
    cout<<"Enter a 1st number:";
    cin>> n;
    cout<<"Enter a 2nd number:";
    cin>> m;
    cout<< "before swaping : " << n << " " << m << "\n";
    swap(n,m);
    cout<<" After Swaping : " << n << " " << m ;
     
}