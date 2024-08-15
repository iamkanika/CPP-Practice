#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cout<< "*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=n-i-1;j++ ){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0; j<=n-i-1;j++ ){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0; i<2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++ ){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0; j<=i;j++ ){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    int stars=1;
    for(int i=0; i<n;i++){
        if (i%2==0) {
            stars=1;}
        else{ stars=0;}
        for(int j=0; j<i;j++){
        cout<<stars;
        stars=1-stars;
        }
    cout<<endl;
    }
}
void pattern9(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    // pattern4(n); // pattern 6
    // pattern5(n);  //pattern6;
pattern9(n);    
}