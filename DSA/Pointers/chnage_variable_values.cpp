// update valuses in variable using pointers....

#include<iostream>
using namespace std;
int main (){
    int  x = 78;
    int  y = 56;
   int* ptr1 = &x;
   int* ptr2 = &y;
   //before update values
cout<<"BFORE UPDATE x , y : "<<*ptr1  <<"  " << *ptr2 << endl ;

   //After Update valuse..
   *ptr1 =  20;
   *ptr2 =  30;
cout<<"AFTER UPDATE x , y : "<<*ptr1  <<"  " << *ptr2 ;
}