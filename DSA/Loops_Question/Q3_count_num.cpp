// To Count the Number digit.... if number 12345 ---> Result = 5 digit number
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>> n;
    int count = 0;
    
    while (n>0)
    {
      n = n/10;
      count++;
    
    }   
     cout<<count;   
}