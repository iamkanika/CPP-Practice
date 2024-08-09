#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n to display all numbers with their sum =";
    cin>>n;
    int i=1;
    //printing numbers 1 to n//
    while (i<=n)
    {
        cout<<i<<endl;
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of numbers is = "<<sum<<endl;
}