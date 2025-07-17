//Function to calculate factorial of a number.
//Input: 5 → Output: 120
#include<iostream>
using namespace std;
int Factorial_NUM(int n ){
    int product = 1;
    for (int i  = 1; i <= n; i++) {
        product = product*i;
    }
    return product;
}
int main (){
    int n ;
    cout<<"Enter a number : ";
    cin >> n;
    int m = Factorial_NUM(n);
    cout << "Factorial of " << n << " " << "is = " <<m ;
return 0;
}
