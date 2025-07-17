// Print all armstrong numbers between 1 and 500
#include<iostream>
using namespace std;
int main (){
    int n , r , temp;
    int sum = 0;
    cout<<"Enter a number:";
    cin >> n ;
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(temp==sum){
        cout<<"Amstrong number";

    }else{
        cout<<"Not Amstrong number:";
    }

    }
