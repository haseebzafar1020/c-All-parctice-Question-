// Reverse a number if number 1234 Result = 4321..
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>> n;
    double l_digit=0;
    while(n>0){
        l_digit = n % 10;
       cout<<l_digit;
        n = n/10;
    }
    
}