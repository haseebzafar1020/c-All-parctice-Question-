#include<iostream>
using namespace std;
int main(){
    int n ;                                              
    
    cout<<"Enter a number:";          //--->Output                          
                                         //  A
    cin >> n ;                          //   AB
                                        //   ABC
for (int i = 1; i <=n; i++)            //    ABCD
{
    char a = 'A';   
    int b = 1;
    for (int j = 1; j <= i; j++)
    {
        if(j%2!=0){
        cout<< a  ;
        a=a+1;
        }
        else{
            cout<< b  ;
            b = b+1;
        }
    }
    cout<<"\n";  
}
   
}