#include<bits/stdc++.h>
using namespace std;
// function types-
// void 
// return
// parameterized
// non-parameterized
void printName(){
    cout<<"Kanika";
}
void greet ( string name){
    cout<<"Hy " <<name;
}
int sum(int num1, int num2){
    int res= num1+num2;
    return res;
}
void passValue( int num){
    num+=5;
    cout<< num;
}
void passreference(string &key){
    key[0]= 'k';
    cout<< key;
}
int main(){
    printName();
    cout<< endl;
    // greet("Kani");
    string name;
    cin>> name;
    greet(name);
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    int ans= sum(num1,num2);
    int minimum= min(num1, num2);
    cout<<"Minimum number is "<< minimum<<endl;
    cout<< "sum is " <<ans <<endl;

    // pass by value and reference
    int num=10;
    passValue(num);
    cout<<endl <<num<< endl;
    string s = "lion";
    passreference(s);
    cout<< endl << s;

}