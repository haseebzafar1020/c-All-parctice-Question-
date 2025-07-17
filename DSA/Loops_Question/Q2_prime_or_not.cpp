
//---> Check number are composite  or prime using Break Statement....

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>> a;
    int b ;
    for (int i = 2; i < a ; i++){
    if (a%i==0){
        b = 1;
        break;
      }
    }
    if (b==1){
    cout<<"composite";
    }
    else{
    cout<<"prime";
    } 
}