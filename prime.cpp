#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n="<<endl;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<" n is not prime"<<endl;
        } 
    
        
        i++;
    }
         
                   
    
    
}