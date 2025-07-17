// Swap two numbers Using Pointers.....
#include<iostream>
using namespace std;
 void Swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main (){
    int a = 10;
    int b = 20;
    cout<<"BEFORE SWAPING : "<<"a = "<< a << " b = "<< b <<endl;

  Swap(&a , &b );
    cout<<"AFTER SWAPING  : "<<"a = "<< a << " b = "<< b <<endl;

return 0;
} 