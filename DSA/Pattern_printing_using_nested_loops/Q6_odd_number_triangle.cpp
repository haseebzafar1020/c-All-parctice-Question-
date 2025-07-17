#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:";                                        //1
    cin >> n ;                                                      //13                                                                  //135
for (int i = 1; i <=n; i++) {                                        //1357
    int a = 1;                                    // ---> takay hr dafa one se start hu....
    for (int j = 1; j <=i ; j++){                  ///---> o rhar dafa i se compare hu ga j... 
        cout<<a;
         a=a+2;
    }
    cout<<"\n";      
}  
}