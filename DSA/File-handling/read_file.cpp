#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st;
    ifstream read("abc.txt");
    // read>>st; // Read single word
    // cout<<st;
    
   getline(read,st);  // getline function use to read all line.. 
   cout<<st;
}