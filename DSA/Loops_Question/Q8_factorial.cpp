// Find Factorial given number? if number = 5 >> Result = 120 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number:";
    cin>>n;
   int product = 1;
    for (int i = 1; i<=n ; i++){
        product =product*i;
        cout<<product<<endl;
    }
  
    }
