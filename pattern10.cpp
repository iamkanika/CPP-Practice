#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of n="<<endl;
    cin>>n;
    int i=1;
    int m;
    while (i<=n)
    {
        int j=1;
        m=i-j+1;
        while (j<=i)
        {
            cout<<m<<" ";
            m=m+1;
            j=j+1;

            
        }
        cout<<endl;
        i=i+1;

    }
    
}