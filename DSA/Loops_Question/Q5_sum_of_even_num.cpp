// Sum of Even Number digit if Number 23456 --> Result Even Sum => 12
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
        if(l_digit%2==0){
        sum = sum+l_digit;
        }
        n = n/10;
    }
    cout<<sum;
}