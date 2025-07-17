// Sum of Digit if number 2345 ---> Result = Sum digit 14
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number :";
    cin>> n;
    int sum = 0;
    int l_digit=0;
    while(n>0){
        l_digit = n % 10;
        sum = sum+l_digit;
        n = n/10;
        
    }
    cout<<sum;
}