//Write a function to add two numbers.
// Input: 5, 10 → Output: 15
#include<iostream>
using namespace std;
int add_fun(int x , int y){
 return x+y;
}
int main(){
    int n, m;
cout<< "Enter a first number : ";
cin >> n;
cout<< "Enter a Secound number : ";
cin >> m;
int sum = add_fun(n,m);
cout<< "Sum of two Numbers = " << sum;
}