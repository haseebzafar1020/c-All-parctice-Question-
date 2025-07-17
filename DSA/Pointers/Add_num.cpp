//Add two number using pointer...
#include<iostream>
using namespace std;
int main (){
    int x = 20;
    int y = 50;
    int* ptr1 = &x;
    int* ptr2 = &y;
 int sum = *ptr1 + *ptr2;
 cout<<"The Sum of two numbers :"<< sum; 
}