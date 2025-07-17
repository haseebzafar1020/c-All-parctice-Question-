//Fabonacci Series
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number:";
    cin>>n;
   int a=1 ;
   int b=1;
   int sum =1;
    for (int i = 1; i<=n-2 ; i++){
        cout<< sum<<endl ;
        sum = a+b;
        a = b;
        b =sum;
    }
    }
