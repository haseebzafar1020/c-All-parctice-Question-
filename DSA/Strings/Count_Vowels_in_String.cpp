// Count the Vowels in Strings..... 
#include<iostream>
using namespace std;
int main(){
    string txt = "Haseeb is a best person AND He is loyal";
    int count = 0;
    for(int i = 0 ; i < txt.length();i++){
    if (txt[i] =='a'||txt[i]=='e'||txt[i]=='i'||txt[i]=='o'||txt[i]=='u'
    ||txt[i] =='A'||txt[i]=='E'||txt[i]=='I'||txt[i]=='O'||txt[i]=='U'){
        count++;
    }
    }
    cout<<count;
    return 0;
}