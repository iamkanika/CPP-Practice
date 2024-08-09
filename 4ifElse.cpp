#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>> age;
    cout << "value of age is "<< age << endl;
    if(age>=18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are not an adult now.";
    }
    int n; 
    cout<<"Value of n is "<<endl;
    cin>>n;
    if (n>0)
    {
    cout<<"n is positive"<<endl;
    }
    else if (n<0)
    {
        cout<<"n is negative"<<endl;
    }
    else
    {
        cout<<"n is zero"<<endl;
    }
  if (n%2==0)
  {
    cout<<"n is even"<<endl;
  }
        else{
            cout<<"n is odd"<<endl;
        }
}
