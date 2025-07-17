//Create a function to check whether a number is Prime  or  Composite.
//Input: 7 → Output: Prime Number
#include<iostream>
using namespace std;
void Check_Prime_Composite(int x){
    int a = 0;
    for (int i = 2; i < x; i++){
      if (x%i==0){
        a = 1;
        break;
        }
    }
    if (a==1){
        cout<<"Composite Number";
    }
    else{
        cout<<"Prime Number";
    }
}
int main (){
    int number;
    cout<<"Enter a number:";
    cin >> number;
    Check_Prime_Composite(number);
}