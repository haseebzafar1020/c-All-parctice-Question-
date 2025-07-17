//Given 2 numbers ‘a’ and ‘b’ , find ‘a’ raised to the power ‘b’.
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int b;
    cout<<"Enter a number:";
    cin>>b;
    int power = 1;
    for (int i = 1 ; i<=b;i++){
      power = power*a ;
    }
    cout<<power;
    }
