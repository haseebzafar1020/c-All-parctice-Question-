#include<iostream>
using namespace std;
int main(){
    string name = "Haseeb Zafar";
    for (int i = 0; i< name.length(); i++){
        if(name[i] % 2 == 0){
            name [i] = 'a';
        }
    }
       cout<< name;
       return 0;
    }