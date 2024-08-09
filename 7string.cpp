#include<iostream>
using namespace std;
int main(){
    string s = "Kanika";
    int len = s.size();
    cout<<len << endl;
    cout<< s[2]<< endl;
    // string is a character within itself.
    s[5]= 'j';
    cout<< s[len-1]<< endl;
}